// Serious sketch with 120 tones are randomly played on an Arduino UNO.

// To mix the output of the signals to output to a small speaker (i.e. 8 Ohms or higher),
// simply use a near 100 Ohm resistor from an output pin and tie it at the speaker.
// Don't forget to connect the other side of the speaker to ground!

/*
I've modified and verified the whole code into another level using chibiOS, one of the
smallest and efficient RTOS for Arduino. ChibiOS is under license of GPL3. You could find more
about chibiOS at http://www.chibios.org/dokuwiki/doku.php . You could easily add the chibiOS
library to any Arduino 1.0.1 .ino projects. It is almost neutral to any version control issues.

I'm a hobbyst, an audio engineer at a South Korea braodcasting company called MBC, an open source
hardware movement activists, and a wanna-be guru for cybernetic minds. ^^

You could find more about my small projects at http://make-culture.blogspot.kr/
My Korean blog is http://xronos.blog.me
I do have an Youtube channel at http://www.youtube.com/user/xronos?feature=mhee 

*/

// You can get more RTTTL (RingTone Text Transfer Language) songs by googling the world. ^^



#include <ChibiOS.h>
#include <util/atomic.h>
#include "pitches.h"
#include "songs.h"
#include <TrueRandom.h>

#define OCTAVE_OFFSET 0
volatile uint32_t count = 0;
int tone_pin = 6;            // You can assing any digital output pin for speaker output!
int prev = 0;
const uint8_t LED_PIN = 13;  // onboard LED is connected to the pin number 13.

char* song = {"MacGyver:d=4,o=6,b=150:8b4,8e5,8a5,8b5,a5,8e5,8b4,8p,8e5,8a5,8b5,8a5,8e5,b4,8p,8e5,8a5,8b5,a5,8e5,8b4,8p,8a5,8d,8c,8d,8c,8b5,8a5,8b4,8e5,8a5,8b5,a5,8e5,8b4,8p,8e5,8a5,8b5,8a5,8e5,b4,8p,8e5,8a5,8b5,a5,8e5,8b4,8p,8a5,8d,8c,8d,8c,8b5,8a5,b5,8p,2b5,8p,b5,8p,a5,d.,b5,8p,2b5,8p,8b5,8p,2a5,p,8c,8c,8c,8c,8c,8c,2b5,16p,8f#5,8a5,8p,2g5,8p,8c,8c,8p,b5,8a5,8b5,8a5,8g5,8p,e,2a5,16p,8c,8c,8p,2b5,8p,8f#5,8a5,8p,2g5,8p,8c,8c,8p,4b5,8a5,8b5,8a5,8g5,8p,4e,2a5,2b5,32p,8c,8b5,8a5,c,8b5,8a5,8d,8c,8b5,d,8c,8b5,e,8d,8e,f#,b5,g,8p,f#,f,b5,8g,8e,8b5,8f#,8d,8a5,8e,8c,8g5,8d,8b5,8g5,8c,8e5,8b5,8d5,8c,8b5,8a5,8g5,a#5,a5,8g,8g5,8d,8g5,8d#,8d#5,8a#5,8a5,8g5,8g4,8d5,8g4,8d#5,8g4,8a#4,8a4,8g4,8g4,8g4,8g4,8g4,8g4,8g4"};
//MacGyver is one of my adolescent heroes.

//------------------------------------------------------------------------------
// thread 1 
// 64 byte stack beyond task switch and interrupt needs
static WORKING_AREA(waThread1, 64);

static msg_t Thread1(void *arg) {


pinMode(LED_PIN, OUTPUT);
  while (TRUE) {
    digitalWrite(LED_PIN, HIGH);
    chThdSleepMilliseconds(50);
    digitalWrite(LED_PIN, LOW);
    chThdSleepMilliseconds(950);
  }
  return 0;

}
//------------------------------------------------------------------------------
// thread 2 - high priority for playing RTTTL sound
// 200 byte stack beyond task switch and interrupt needs
static WORKING_AREA(waThread2, 64);
  static msg_t Thread2(void *arg) {
  int song_index;

//  Serial.begin(9600);

  while (TRUE) {

    song_index = TrueRandom.random(0,119);

    strcpy_P(song,(char*)pgm_read_word(&(songs[song_index])));
    
    if(song_index != prev){

//    p = song;
    play_RTTTL(song);
    prev = song_index;
    chThdSleepMilliseconds(2000);

    }
    else{
    }
  }

  return 0;
}

void setup()
{

  // initialize ChibiOS with interrupts disabled
  // ChibiOS will enable interrupts
  cli();
  halInit();
  chSysInit();
  
  // start blink thread
  chThdCreateStatic(waThread1, sizeof(waThread1),
    NORMALPRIO + 1, Thread1, NULL);
    
  // start print thread
  chThdCreateStatic(waThread2, sizeof(waThread2),
    NORMALPRIO + 2, Thread2, NULL);
  
}

#define isdigit(n) (n >= '0' && n <= '9')

void loop()
{
  // must insure increment is atomic
  // in case of context switch for print

}

void play_RTTTL(char* p){
 
  byte default_dur = 4;
  byte default_oct = 6;
  int bpm = 63;
  int num;
  long wholenote;
  long duration;
  byte note;
  byte scale;
 
   // Absolutely no error checking in here


  // format: d=N,o=N,b=NNN:
  // find the start (skip name, etc)

  while(*p != ':') p++;    // ignore name
  p++;                     // skip ':'

  // get default duration
  if(*p == 'd')
  {
    p++; p++;              // skip "d="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    if(num > 0) default_dur = num;
    p++;                   // skip comma
  }

  // get default octave
  if(*p == 'o')
  {
    p++; p++;              // skip "o="
    num = *p++ - '0';
    if(num >= 3 && num <=7) default_oct = num;
    p++;                   // skip comma
  }

  // get BPM
  if(*p == 'b')
  {
    p++; p++;              // skip "b="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    bpm = num;
    p++;                   // skip colon
  }

  // BPM usually expresses the number of quarter notes per minute
  wholenote = (60 * 1000L / bpm) * 4;  // this is the time for whole note (in milliseconds)


  // now begin note loop
  while(*p)
  {
    // first, get note duration, if available
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    
    if(num) duration = wholenote / num;
    else duration = wholenote / default_dur;  // we will need to check if we are a dotted note after

    // now get the note
    note = 0;

    switch(*p)
    {
      case 'c':
        note = 1;
        break;
      case 'd':
        note = 3;
        break;
      case 'e':
        note = 5;
        break;
      case 'f':
        note = 6;
        break;
      case 'g':
        note = 8;
        break;
      case 'a':
        note = 10;
        break;
      case 'b':
        note = 12;
        break;
      case 'p':
      default:
        note = 0;
    }
    p++;

    // now, get optional '#' sharp
    if(*p == '#')
    {
      note++;
      p++;
    }

    // now, get optional '.' dotted note
    if(*p == '.')
    {
      duration += duration/2;
      p++;
    }
  
    // now, get scale
    if(isdigit(*p))
    {
      scale = *p - '0';
      p++;
    }
    else
    {
      scale = default_oct;
    }

    scale += OCTAVE_OFFSET;

    if(*p == ',')
      p++;       // skip comma for next note (or we may be at the end)

    // now play the note

    if(note)
    {
      tone(tone_pin, notes[(scale - 4) * 12 + note]); // original - 4, not - 5 
        chThdSleepMilliseconds(duration);
//      delay(duration);
      noTone(tone_pin);
    }
    else
    {
      chThdSleepMilliseconds(duration);
//      delay(duration);
    }
  }

  
}
