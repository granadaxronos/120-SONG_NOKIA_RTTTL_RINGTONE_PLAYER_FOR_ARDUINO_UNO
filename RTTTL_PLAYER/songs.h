/*

Collection of songs... You could easily copy and paste any RTTTL string of your choice anywhere.
More than 130 songs for POGMEM wiil cause uploda sync problem. You'd better test it on your own.
My choice was 120 songs on the flash.

*/

#include <avr/pgmspace.h>

prog_char song_0[] PROGMEM ="GirlFromIpane:d=4,o=5,b=160:g.,8e,8e,d,g.,8e,e,8e,8d,g.,e,e,8d,g,8g,8e,e,8e,8d,f,d,d,8d,8c,e,c,c,8c,a#4,2c";
prog_char song_1[] PROGMEM ="The Simpsons:d=4,o=5,b=160:c.6,e6,f#6,8a6,g.6,e6,c6,8a,8f#,8f#,8f#,2g,8p,8p,8f#,8f#,8f#,8g,a#.,8c6,8c6,8c6,c6";
prog_char song_2[] PROGMEM ="Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
prog_char song_3[] PROGMEM ="TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";
prog_char song_4[] PROGMEM ="Entertainer:d=4,o=5,b=140:8d,8d#,8e,c6,8e,c6,8e,2c.6,8c6,8d6,8d#6,8e6,8c6,8d6,e6,8b,d6,2c6,p,8d,8d#,8e,c6,8e,c6,8e,2c.6,8p,8a,8g,8f#,8a,8c6,e6,8d6,8c6,8a,2d6";
prog_char song_5[] PROGMEM ="Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
prog_char song_6[] PROGMEM ="Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b.";
prog_char song_7[] PROGMEM ="Looney:d=4,o=5,b=140:32p,c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
prog_char song_8[] PROGMEM ="20thCenFox:d=16,o=5,b=140:b,8p,b,b,2b,p,c6,32p,b,32p,c6,32p,b,32p,c6,32p,b,8p,b,b,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,g#,32p,a,32p,b,8p,b,b,2b,4p,8e,8g#,8b,1c#6,8f#,8a,8c#6,1e6,8a,8c#6,8e6,1e6,8b,8g#,8a,2b";
prog_char song_9[] PROGMEM ="Bond:d=4,o=5,b=80:32p,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d#6,16d#6,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d6,16c#6,16c#7,c.7,16g#6,16f#6,g#.6";
prog_char song_10[] PROGMEM ="MASH:d=8,o=5,b=140:4a,4g,f#,g,p,f#,p,g,p,f#,p,2e.,p,f#,e,4f#,e,f#,p,e,p,4d.,p,f#,4e,d,e,p,d,p,e,p,d,p,2c#.,p,d,c#,4d,c#,d,p,e,p,4f#,p,a,p,4b,a,b,p,a,p,b,p,2a.,4p,a,b,a,4b,a,b,p,2a.,a,4f#,a,b,p,d6,p,4e.6,d6,b,p,a,p,2b";
prog_char song_11[] PROGMEM ="StarWars:d=4,o=5,b=45:32p,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#.6,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#6";
prog_char song_12[] PROGMEM ="GoodBad:d=4,o=5,b=56:32p,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,d#,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,c#6,32a#,32d#6,32a#,32d#6,8a#.,16f#.,32f.,32d#.,c#,32a#,32d#6,32a#,32d#6,8a#.,16g#.,d#";
prog_char song_13[] PROGMEM ="TopGun:d=4,o=4,b=31:32p,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,16f,d#,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,g#";
prog_char song_14[] PROGMEM ="A-Team:d=8,o=5,b=125:4d#6,a#,2d#6,16p,g#,4a#,4d#.,p,16g,16a#,d#6,a#,f6,2d#6,16p,c#.6,16c6,16a#,g#.,2a#";
prog_char song_15[] PROGMEM ="Flinstones:d=4,o=5,b=40:32p,16f6,16a#,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,d6,16f6,16a#.,16a#6,32g6,16f6,16a#.,32f6,32f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,a#,16a6,16d.6,16a#6,32a6,32a6,32g6,32f#6,32a6,8g6,16g6,16c.6,32a6,32a6,32g6,32g6,32f6,32e6,32g6,8f6,16f6,16a#.,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#6,16c7,8a#.6";
prog_char song_16[] PROGMEM ="Jeopardy:d=4,o=6,b=125:c,f,c,f5,c,f,2c,c,f,c,f,a.,8g,8f,8e,8d,8c#,c,f,c,f5,c,f,2c,f.,8d,c,a#5,a5,g5,f5,p,d#,g#,d#,g#5,d#,g#,2d#,d#,g#,d#,g#,c.7,8a#,8g#,8g,8f,8e,d#,g#,d#,g#5,d#,g#,2d#,g#.,8f,d#,c#,c,p,a#5,p,g#.5,d#,g#";
prog_char song_17[] PROGMEM ="Gadget:d=16,o=5,b=50:32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,32d#,32f,32f#,32g#,a#,d#6,4d6,32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,8d#";
prog_char song_18[] PROGMEM ="Smurfs:d=32,o=5,b=200:4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8f#,p,8a#,p,4g#,4p,g#,p,a#,p,b,p,c6,p,4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8b,p,8f,p,4f#";
prog_char song_19[] PROGMEM ="MahnaMahna:d=16,o=6,b=125:c#,c.,b5,8a#.5,8f.,4g#,a#,g.,4d#,8p,c#,c.,b5,8a#.5,8f.,g#.,8a#.,4g,8p,c#,c.,b5,8a#.5,8f.,4g#,f,g.,8d#.,f,g.,8d#.,f,8g,8d#.,f,8g,d#,8c,a#5,8d#.,8d#.,4d#,8d#.";
prog_char song_20[] PROGMEM ="LeisureSuit:d=16,o=6,b=56:f.5,f#.5,g.5,g#5,32a#5,f5,g#.5,a#.5,32f5,g#5,32a#5,g#5,8c#.,a#5,32c#,a5,a#.5,c#.,32a5,a#5,32c#,d#,8e,c#.,f.,f.,f.,f.,f,32e,d#,8d,a#.5,e,32f,e,32f,c#,d#.,c#";
prog_char song_21[] PROGMEM ="MissionImp:d=16,o=6,b=95:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,a#,g,2d,32p,a#,g,2c#,32p,a#,g,2c,a#5,8c,2p,32p,a#5,g5,2f#,32p,a#5,g5,2f,32p,a#5,g5,2e,d#,8d";
prog_char song_22[] PROGMEM ="TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";
prog_char song_23[] PROGMEM ="90210:d=4,o=5,b=140:8f,8a#,8c6,d.6,2d6,p,8f,8a#,8c6,8d6,8d#6,f6,f.6,2a#.,8f,8a#,8c6,8d6,8d#6,8f6,8g6,f6,8d#6,d#6,d6,2c.6,8a#,a,a#.,g6,8f6,8d#6,8d6,8d#6,8d6,8a#,f";
prog_char song_24[] PROGMEM ="Abdelazer:d=4,o=5,b=160:2d,2f,2a,d6,8e6,8f6,8g6,8f6,8e6,8d6,2c#6,a6,8d6,8f6,8a6,8f6,d6,2a6,g6,8c6,8e6,8g6,8e6,c6,2a6,f6,8b,8d6,8f6,8d6,b,2g6,e6,8a,8c#6,8e6,8c6,a,2f6,8e6,8f6,8e6,8d6,c#6,f6,8e6,8f6,8e6,8d6,a,d6,8c#6,8d6,8e6,8d6,2d6";
prog_char song_25[] PROGMEM ="aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f";
prog_char song_26[] PROGMEM ="Smoke:d=4,o=5,b=112:c,d#,f.,c,d#,8f#,f,p,c,d#,f.,d#,c,2p,8p,c,d#,f.,c,d#,8f#,f,p,c,d#,f.,d#,c,p";
prog_char song_27[] PROGMEM ="smb:d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16d#6,8p,16d6,8p,16c6";
prog_char song_28[] PROGMEM ="smb_under:d=4,o=6,b=100:32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#";
prog_char song_29[] PROGMEM ="smbdeath:d=4,o=5,b=90:32c6,32c6,32c6,8p,16b,16f6,16p,16f6,16f.6,16e.6,16d6,16c6,16p,16e,16p,16c";
prog_char song_30[] PROGMEM ="ducktales:d=4,o=5,b=112:8e6,8e6,16p,16g6,8b6,g#6,p,8e6,8d6,8c6,8d6,8e6,8d6,8c6,8d6,8e6,8e6,16p,16g6,8b6,g#6,p,8e6,8d6,8c6,8d6,8e6,8d6,8c6,8g6,8e6,8e6";
prog_char song_31[] PROGMEM ="Zelda1:d=4,o=5,b=125:a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,16a#.6,16g#6,16f#.6,8g#.6,16f#.6,2f6,f6,8d#6,16d#6,16f6,2f#6,8f6,8d#6,8c#6,16c#6,16d#6,2f6,8d#6,8c#6,8c6,16c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f,a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,c#7,c7,2a6,f6,2f#.6,a#6,a6,2f6,f6,2f#.6,a#6,a6,2f6,d6,2d#.6,f#6,f6,2c#6,a#,c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f";
prog_char song_32[] PROGMEM ="smario2:d=4,o=5,b=125:8g,16c,8e,8g.,16c,8e,16g,16c,16e,16g,8b,a,8p,16c,8g,16c,8e,8g.,16c,8e,16g,16c#,16e,16g,8b,a,8p,16b,8c6,16b,8c6,8a.,16c6,8b,16a,8g,16f#,8g,8e.,16c,8d,16e,8f,16e,8f,8b.4,16e,8d.,c";
prog_char song_33[] PROGMEM ="smb3lvl1:d=4,o=5,b=80:16g,32c,16g.,16a,32c,16a.,16b,32c,16b,16a.,32g#,16a.,16g,32c,16g.,16a,32c,16a,4b.,32p,16c6,32f,16c.6,16d6,32f,16d.6,16e6,32f,16e6,16d.6,32c#6,16d.6,16c6,32f,16c.6,16d6,32f,16d6,4e.6,32p,16g,32c,16g.,16a,32c,16a.,16b,32c,16b,16a.,32g#,16a.,16c6,8c.6,32p,16c6,4c.6";
prog_char song_34[] PROGMEM ="shinobi:d=4,o=5,b=140:b,f#6,d6,b,g,f#,e,2f#.,a,1f#,p,b,f#6,d6,b,g,f#,e,1f#.,8a,1b.,8a,1f#.,8a,1b.,8a,1f#.";
prog_char song_35[] PROGMEM ="outrun_magic:d=4,o=5,b=160:f6,d#6,8g#.6,f6,d#6,8c#.6,d#6,c6,2g#.,c#6,c6,8d#.6,c#6,c6,8f.,a#,16c.6,1a#,f6,d#6,8g#.6,f6,d#6,8c#.6,d#6,c6,2g#.,c#6,c6,8d#.6,c#6,c6,16f.,16g#.,c6,2a#.";
prog_char song_36[] PROGMEM ="Popeye:d=4,o=5,b=140:16g.,16f.,16g.,16p,32p,16c.,16p,32p,16c.,16p,32p,16e.,16d.,16c.,16d.,16e.,16f.,g,8p,16a,16f,16a,16c6,16b,16a,16g,16a,16g,8e,16g,16g,16g,16g,8a,16b,32c6,32b,32c6,32b,32c6,32b,8c6";
prog_char song_37[] PROGMEM ="Wonderboy:d=4,o=5,b=225:f6,d6,f6,8d6,f6,32p,8f6,d6,f6,d6,e6,c6,e6,8c6,e6,32p,8e6,c6,e6,c6";
prog_char song_38[] PROGMEM ="smwwd1:d=4,o=5,b=125:a,8f.,16c,16d,16f,16p,f,16d,16c,16p,16f,16p,16f,16p,8c6,8a.,g,16c,a,8f.,16c,16d,16f,16p,f,16d,16c,16p,16f,16p,16a#,16a,16g,2f,16p,8a.,8f.,8c,8a.,f,16g#,16f,16c,16p,8g#.,2g,8a.,8f.,8c,8a.,f,16g#,16f,8c,2c6";
prog_char song_39[] PROGMEM ="dkong:d=4,o=5,b=160:2c,8d.,d#.,c.,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,2c6";
prog_char song_40[] PROGMEM ="BarbieGirl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
prog_char song_41[] PROGMEM ="Coca-cola:d=4,o=5,b=125:8f#6,8f#6,8f#6,8f#6,g6,8f#6,e6,8e6,8a6,f#6,d6,2p";
prog_char song_42[] PROGMEM ="90210:d=4,o=5,b=140:8f,8a#,8c6,d.6,2d6,p,8f,8a#,8c6,8d6,8d#6,f6,f.6,2a#.,8f,8a#,8c6,8d6,8d#6,8f6,8g6,f6,8d#6,d#6,d6,2c.6,8a#,a,a#.,g6,8f6,8d#6,8d6,8d#6,8d6,8a#,f";
prog_char song_43[] PROGMEM ="Abdelazer:d=4,o=5,b=160:2d,2f,2a,d6,8e6,8f6,8g6,8f6,8e6,8d6,2c#6,a6,8d6,8f6,8a6,8f6,d6,2a6,g6,8c6,8e6,8g6,8e6,c6,2a6,f6,8b,8d6,8f6,8d6,b,2g6,e6,8a,8c#6,8e6,8c6,a,2f6,8e6,8f6,8e6,8d6,c#6,f6,8e6,8f6,8e6,8d6,a,d6,8c#6,8d6,8e6,8d6,2d6";
prog_char song_44[] PROGMEM ="aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f";
prog_char song_45[] PROGMEM ="aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f";
prog_char song_46[] PROGMEM ="Agadoo:d=4,o=5,b=125:8b,8g#,e,8e,8e,e,8e,8e,8e,8e,8d#,8e,f#,8a,8f#,d#,8d#,8d#,d#,8d#,8d#,8d#,8d#,8c#,8d#,e";
prog_char song_47[] PROGMEM ="Argentina:d=4,o=5,b=70:8e.4,8e4,8e4,8e.4,8f4,8g4,8a4,g4,8p,8g4,8a4,8a4,8g4,c,g4,8f4,e.4,8p,8e4,8f4,8g4,8d4,d4,8d4,8e4,8f4,c4,16p,8c4,8d4,8c4,8e4,g4,16p,8g4,8g4,8a4,c,16p";
prog_char song_48[] PROGMEM ="Auld L S:d=4,o=5,b=100:g,c.6,8c6,c6,e6,d.6,8c6,d6,8e6,8d6,c.6,8c6,e6,g6,2a.6,a6,g.6,8e6,e6,c6,d.6,8c6,d6,8e6,8d6,c.6,8a,a,g,2c.6";
prog_char song_49[] PROGMEM =" :d=4,o=5,b=125:g,8a#.,16g,16p,16g,8c6,8g,8f,g,8d.6,16g,16p,16g,8d#6,8d6,8a#,8g,8d6,8g6,16g,16f,16p,16f,8d,8a#,2g,p,16f6,8d6,8c6,8a#,g,8a#.,16g,16p,16g,8c6,8g,8f,g,8d.6,16g,16p,16g,8d#6,8d6,8a#,8g,8d6,8g6,16g,16f,16p,16f,8d,8a#,2g";
prog_char song_50[] PROGMEM ="axelf:d=4,o=5,b=160:f#,8a.,8f#,16f#,8a#,8f#,8e,f#,8c.6,8f#,16f#,8d6,8c#6,8a,8f#,8c#6,8f#6,16f#,8e,16e,8c#,8g#,f#.";
prog_char song_51[] PROGMEM ="girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
prog_char song_52[] PROGMEM ="Black Bear:d=4,o=5,b=180:d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,8c.,16b4,c,8f.,16d#,8d.,16d#,8c.,16d,8a#.4,16c,8d.,16a#4,d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,f,f,8g.,16f,d#,g,2d#";
prog_char song_53[] PROGMEM ="Bebopalula:d=4,o=5,b=180:2p,2a,a,8a,8e,g,a,a,a,g,a,8p,8a,8a,8e,g,8a,8a,a,a,g,a";
prog_char song_54[] PROGMEM ="Be-Bop-A-Lula:d=4,o=5,b=180:2p,2a,a,8a,8e,g,a,a,a,g,a,8p,8a,8a,8e,g,8a,8a,a,a,g,a";
prog_char song_55[] PROGMEM ="Birdy S:d=4,o=5,b=100:16g,16g,16a,16a,16e,16e,8g,16g,16g,16a,16a,16e,16e,8g,16g,16g,16a,16a,16c6,16c6,8b,8b,8a,8g,8f,16f,16f,16g,16g,16d,16d,8f,16f,16f,16g,16g,16d,16d,8f,16f,16f,16g,16g,16a,16b,8c6,8a,8g,8e,c";
prog_char song_56[] PROGMEM ="Bogey:d=4,o=5,b=140:8g,8e,p,8p,8e,8f,8g,e6,e6,2c6,8g,8e,p,8p,8e,8f,8e,g,g,2f,8f,8d,p,8p,8d,8e,8f,8g,8e,p,8p,8e,8f#,8e,8d,8g,8p,8e,8f#,8d,8p,8a,8g.,16f#,8g,8a,8g,8f,8e,8d,8c";
prog_char song_57[] PROGMEM ="Bolero:d=4,o=5,b=80:c6,8c6,16b,16c6,16d6,16c6,16b,16a,8c6,16c6,16a,c6,8c6,16b,16c6,16a,16g,16e,16f,2g,16g,16f,16e,16d,16e,16f,16g,16a,g,g,16g,16a,16b,16a,16g,16f,16e,16d,16e,16d,8c,8c,16c,16d,8e,8f,d,2g";
prog_char song_58[] PROGMEM ="Bulletme:d=4,o=5,b=112:b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16e6,16f#6,16g6,8f#.6,8g6,8a6,b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16c6,16b,16a,16b";
prog_char song_59[] PROGMEM =" :d=4,o=5,b=80:8d,8f#,8a,8d6,8c#,8e,8a,8c#6,8d,8f#,8b,8d6,8a,8c#,8f#,8a,8b,8d,8g,8b,8a,8d,8f#,8a,8b,8f#,8g,8b,8c#,8e,8a,8c#6,f#6,8f#,8a,e6,8e,8a,d6,8f#,8a,c#6,8c#,8e,b,8d,8g,a,8f#,8d,b,8d,8g,c#.6";
prog_char song_60[] PROGMEM ="careaboutus:d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
prog_char song_61[] PROGMEM ="Children:d=4,o=5,b=63:8p,f.6,1p,g#6,8g6,d#.6,1p,g#6,8g6,c.6,1p,g#6,8g6,g#.,1p,16f,16g,16g#,16c6,f.6,1p,g#6,8g6,d#.6,1p,16c#6,16c6,c#6,8c6,g#,2p,g.,g#,8c6,f.";
prog_char song_62[] PROGMEM =" :d=4,o=5,b=70:16e,16f,16g,16a,16b,16c6,16d6,16d6,16d6,c6,e6,8d6,8c6,16b,16c6,32g,32a,16e,f,f,8g,8a,8b,16c6,8b,16d6,16a,16b,16d6,16d6,16a,16b,16c6,16b,16f,16b,8a,f,e,8c6,d,8b,e,8a,8e,8f,8g,8a,8b";
prog_char song_63[] PROGMEM ="countdown:d=4,o=5,b=125:p,8p,16b,16a,b,e,p,8p,16c6,16b,8c6,8b,a,p,8p,16c6,16b,c6,e,p,8p,16a,16g,8a,8g,8f#,8a,g.,16f#,16g,a.,16g,16a,8b,8a,8g,8f#,e,c6,2b.,16b,16c6,16b,16a,1b";
prog_char song_64[] PROGMEM ="Crypt:d=4,o=5,b=160:d#,f#,a,8p,8b,a#,f#,d#,8p,8b4,a#4,d#,f#,a,2b4,8p,a#4,d,f,8p,8f#,g#,b,a#,8p,8g#,f#,f,d#,d,2d#,1p,1p,p.,f,g#,b,8p,8c#6,c6,g#,f,8p,8c#,c,f,g#,b,1c#,c,e,g,8p,8g#,a#,c#6,c6,8p,8a#,g#,g,f,e,2f,16p";
prog_char song_65[] PROGMEM ="Dallas:d=4,o=5,b=125:8e,a.,8e,e.6,8a,c#6,8b,8c#6,a,e,a,f#6,e6,8c#6,8d6,2e.6,8p,8e,a,f#6,e6,8c#6,8d6,e6,8b,8c#6,a,e,a,8c#6,8d6,b.,8a,2a";
prog_char song_66[] PROGMEM ="dark:d=4,o=5,b=140:8f#6,8e6,2f#6,16e6,16d#6,16d6,16b,a#,1b,8f#,8e,2f#,8c#,8d,8a#4,1b4,8f#,8e,2f#,16e,16d#,16d,16b4,a#4,1b4,8f#,8e,2f#,c#,2d,2e4,1b4";
prog_char song_67[] PROGMEM ="DasBoot:d=4,o=5,b=100:d#.4,8d4,8c4,8d4,8d#4,8g4,a#.4,8a4,8g4,8a4,8a#4,8d,2f.,p,f.4,8e4,8d4,8e4,8f4,8a4,c.,8b4,8a4,8b4,8c,8e,2g.,2p";
prog_char song_68[] PROGMEM ="DavyCrockett:d=4,o=5,b=160:f,8f.,16g,8a.,16g,8f.,16c,d,f,2c,f,g,a,8g.,16f,g,8g.,16a,2g,c,8c.,16c,f,8c.,16c,d,8d.,16d,2g,e,8e.,16e,e,8e.,16d,c,8d.,16e,2f,a,2c.6,d.6,8d6,8c6,a.,8c.,16c,8c.,16c,e,g,2f.,p,a,2c.6,d.6,8d6,8c6,a.,8c.,16c,8c.,16c,e,g,2f.";
prog_char song_69[] PROGMEM =" :d=4,o=5,b=100:c.,c,8c,c.,d#,8d,d,8c,c,8c,2c.";
prog_char song_70[] PROGMEM ="Deutschlandlied:d=4,o=5,b=160:2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,8b,8g,2d6,2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,8b,8g,2d6,a,b,8a,8f#,d,c6,b,8a,8f#,d,d6,c6,2b,8b,c#6,8c#6,8d6,2d6,2g6,8f#6,8f#6,8e6,d6,2e6,8d6,8d6,8c6,b,2a,16b,16c6,8d6,8e6,8c6,8a,2g,8b,8a,2g";
prog_char song_71[] PROGMEM ="Do you hear the people sing:d=4,o=5,b=140:8e.6,16d6,8c.6,16d6,8e.6,16f6,g6,8e6,8d6,8c6,8b.,16a,8b.,16c6,g,8a,8g,8f,8e.,16g,8c.6,16e6,8d.6,16c#6,8d.6,16a,8c.6,16b,8b.,16c6,d6";
prog_char song_72[] PROGMEM ="don'tcare:d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
prog_char song_73[] PROGMEM ="don't wanna miss a thing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,16p,a,8g,16f,16p,8f,16p,16c,16p,g,f";
prog_char song_74[] PROGMEM ="dualingbanjos:d=4,o=5,b=200:8c#,8d,e,c#,d,b4,c#,d#4,b4,p,16c#6,16p,16d6,16p,8e6,8p,8c#6,8p,8d6,8p,8b,8p,8c#6,8p,8a,8p,b,p,a4,a4,b4,c#,d#4,c#,b4,p,8a,8p,8a,8p,8b,8p,8c#6,8p,8a,8p,8c#6,8p,8b";
prog_char song_75[] PROGMEM ="Dustman:d=4,o=5,b=140:8a.,16a,16b,16p,16c6,16p,8c#6,p,8e6,16c#6,16p,16c#6,16p,16c#6,16p,16c#6,16p,16c#6,16p,c#6,16c#6,16p,16c#6,16p,16c#6,16p,16d6,16p,16c#6,16p,b,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,8b.,16p,16e6,16e6,16e6,16p,16d6,16p,16c#6,16p,16b,16p,a";
prog_char song_76[] PROGMEM ="Equidor:d=4,o=5,b=140:8g.,8d.,8a#,8a,8c6,8a,8f,8g.,8d.,8a#,8a,8c6,8a,8f,8a#.,8f.,8d6,8c6,8d6,8c6,8a,8a#.,8g.,8a#,8a,8a#,8a,8f";
prog_char song_77[] PROGMEM ="Eternally:d=4,o=5,b=112:b,8b,8a,8b,8c6,a,8a,8g,8a,8b,g,8g,8f#,8e,8d#,2e";
prog_char song_78[] PROGMEM ="Exodus:d=4,o=5,b=70:8c#,f#.,8c#6,b.,8f#,8a,8b,8g#.,16e,f#.,8c#6,e.6,8d#6,8e6,8f#6,8d#.6,16b,2c#6";
prog_char song_79[] PROGMEM ="Fawlty:d=4,o=5,b=125:8b,8c6,8d6,8c#6,8d6,8c#6,8d6,8g6,e.6,8d6,8c6,8b,8c6,8b,8c6,8b,8c6,8f#6,d.6,8c6,8b,8a,8g,8f#,8g,8f#,8g,8d6,8c6,8b,8c6,8b,8a,8g,8f#,8g,8e,8f#,d,8c6,8d6,8b,8c6,a";
prog_char song_80[] PROGMEM ="Flntstn:d=4,o=5,b=200:g#,c#,8p,c#6,8a#,g#,c#,8p,g#,8f#,8f,8f,8f#,8g#,c#,d#,2f,2p,g#,c#,8p,c#6,8a#,g#,c#,8p,g#,8f#,8f,8f,8f#,8g#,c#,d#,2c#";
prog_char song_81[] PROGMEM ="Friends:d=4,o=5,b=80:c,g,a#4,f,c,g,a#4,8a#,8e,c,g,a#4,f,c,g,a#4,8a#,8e";
prog_char song_82[] PROGMEM ="Fun2Remix:d=4,o=5,b=320:c6,8c6,g,8g,a,a#,a,g,a,c6,8c6,g,8g,a,a#,a,g,a,a#,8a#,f,8f,g,g#,g,f,g,c6,8c6,c6,8c6,8c6,8c6,c6,c6,c6,c6";
prog_char song_83[] PROGMEM ="FunkyTown:d=4,o=4,b=125:8c6,8c6,8a#5,8c6,8p,8g5,8p,8g5,8c6,8f6,8e6,8c6,2p,8c6,8c6,8a#5,8c6,8p,8g5,8p,8g5,8c6,8f6,8e6,8c6";
prog_char song_84[] PROGMEM ="song11:d=4,o=5,b=125:8g.,8g.,8g,8c,8c,8d,8d,8g.,8g.,8g,8a#,8a#,8c6,8c6,8g.,8g.,8g,8c,8c,8d,8d,8g.,8g.,8g,8a#,8a#,8c6,8d6";
prog_char song_85[] PROGMEM ="National Anthem:d=4,o=5,b=140:g6,g6,a6,f#.6,8g6,a6,b6,b6,c7,b.6,8a6,g6,a6,g6,f#6,g6";
prog_char song_86[] PROGMEM ="Greensleaves:d=4,o=5,b=140:g,2a#,c6,d.6,8d#6,d6,2c6,a,f.,8g,a,2a#,g,g.,8f,g,2a,f,2d,g,2a#,c6,d.6,8e6,d6,2c6,a,f.,8g,a,a#.,8a,g,f#.,8e,f#,2g";
prog_char song_87[] PROGMEM ="Halloween:d=4,o=5,b=180:8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6,8f#";
prog_char song_88[] PROGMEM ="HeyBaby:d=4,o=5,b=900:8a4,16a#4,16b4,16c,16c#,16d,16d#,16e,16f,16f#,16g,16g#,16a,16a#,16b,16c6,8c#6,16d6,16d#6,16e6,16f6,p,p,16a4,16a#4,16b4,16c,16c#,16d,16d#,16e,16f,16f#,16g,16g#,16a,16a#,16b,16a#,16a,16g#,16g,16f#,16f,16e,16d#,16d,16c#,16c,16b4,16a#4,16a4";
prog_char song_89[] PROGMEM ="Hitchcoc:d=4,o=5,b=200:16c,16p,16f4,8p,8f,32g,32p,16f,32p,16e,32p,16d,32p,16e,8p,16f,32p,16g,8p.,16c,16p,16f4,8p,8f,32g,32p,16f,32p,16e,32p,16d,32p,16e,8p,16f,32p,16g,8p.,16c,16p,16f4,8p,16g#,32p,8c6,16p,16a#,32p,16g#,8p,16c6,32p,8d#6,16p,16c#6,32p,16c6,8p,16d#6,32p,8g6,16p,16f6,32p,16e6,32p,16c#6,32p,16c6,32p,16a#,32p,16g#,32p,16g,32p,8f4";
prog_char song_90[] PROGMEM ="Ickley:d=4,o=5,b=100:8d,8g.,16g,8g,8d,g,8p,8a,8b.,16b,8b,8a,b,8p,8b,a,g,g,f#,2g";
prog_char song_91[] PROGMEM ="Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
prog_char song_92[] PROGMEM ="GirlFromIpane:d=4,o=5,b=160:g.,8e,8e,d,g.,8e,e,8e,8d,g.,e,e,8d,g,8g,8e,e,8e,8d,f,d,d,8d,8c,e,c,c,8c,a#4,2c";
prog_char song_93[] PROGMEM ="I swear:d=4,o=5,b=125:2p,p,8b,8a.,16f#,8e,p,8p,8f#,8g#,a,8a,8a,a,8c#,8d,2e,8p,8f#,8g#,2e";
prog_char song_94[] PROGMEM ="Itchy:d=4,o=5,b=160:8c6,8a,p,8c6,8a6,p,8c6,8a,8c6,8a,8c6,8a6,p,8p,8c6,8d6,8e6,8p,8e6,8f6,8g6,p,8d6,8c6,d6,8f6,a#6,a6,2c7";
prog_char song_95[] PROGMEM ="Jesus:d=4,o=5,b=100:f,8d,2a#4,g,8d#,2a#4,g#,8f,8g#,g,8f,8d#,f,8d,2a#4";
prog_char song_96[] PROGMEM ="killing me softly:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a.";
prog_char song_97[] PROGMEM ="KnightRider:d=4,o=5,b=125:16e,16p,16f,16e,16e,16p,16e,16e,16f,16e,16e,16e,16d#,16e,16e,16e,16e,16p,16f,16e,16e,16p,16f,16e,16f,16e,16e,16e,16d#,16e,16e,16e,16d,16p,16e,16d,16d,16p,16e,16d,16e,16d,16d,16d,16c,16d,16d,16d,16d,16p,16e,16d,16d,16p,16e,16d,16e,16d,16d,16d,16c,16d,16d,16d";
prog_char song_98[] PROGMEM ="Lazy:d=4,o=5,b=160:8d.4,8f4,16d4,8g4,16f4,8d.4,8f4,16d4,8g4,16f4,8d4,8p,8p";
prog_char song_99[] PROGMEM ="Walk of Life:d=4,o=5,b=160:b.,b.,p,8p,8f#,8g,b,8g,8f,e.,e.,p,2p,p,8f,8g,b.,b.,p,8p,8f,8g,b,8g,f,e.,e.,p,8p,8f,8g,b,8g,8f,8e";
prog_char song_100[] PROGMEM ="Little Wing:d=4,o=5,b=63:2p,p,8e,8g,8a,a.,p,8a,8g,8g,e.,p,8d,8c,8d,16e,8d.,8p,8d,8d,8c,2a";
prog_char song_101[] PROGMEM ="Looney:d=4,o=5,b=140:c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
prog_char song_102[] PROGMEM ="losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
prog_char song_103[] PROGMEM ="Lulay Lula:d=4,o=4,b=100:d6,d6,c#6,2d6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2d6,a6,2g6,f6,2e6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2f#6";
prog_char song_104[] PROGMEM ="Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,p,2c.6,a,8c6,8a,8f,p,2p";
prog_char song_105[] PROGMEM ="Barbie girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#,8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#,8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
prog_char song_106[] PROGMEM ="Match of the day:d=4,o=5,b=100:8c,8f,8a,8c.6,16a,8a,8a,8a,a,8a#,8c.6,16a,8g,8a,8a#,8c,8e,8g,8a#.,16g,8g,8g,8g,g,8a,8a#.,16g,8f,8g,8a,8c,8f,8a,8c.6,16a,8a,8a,8a,a,8a#,8c.6,16a,8a#,8c6,d6,8d6,8e6,8f6,16f6,8e6,16e6,8d6,8f6,8c6,8c6,8d6,8c6,16a#,8a,16a,8g,f";
prog_char song_107[] PROGMEM ="missathing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,16p,a,8g,16f,16p,8f,16p,16c,16p,g,f";
prog_char song_108[] PROGMEM ="Mission:d=4,o=6,b=100:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,16g,8p,16g,8p,16a#,16p,16c,16p,16g,8p,16g,8p,16f,16p,16f#,16p,16g,8p,16g,8p,16a#,16p,16c,16p,16g,8p,16g,8p,16f,16p,16f#,16p,16a#,16g,2d,32p,16a#,16g,2c#,32p,16a#,16g,2c,16p,16a#5,16c";
prog_char song_109[] PROGMEM ="songs12:d=4,o=5,b=112:8e6,8e6,8e6,8e6,8e6,8e6,16e,16a,16c6,16e6,8d#6,8d#6,8d#6,8d#6,8d#6,8d#6,16f,16a,16c6,16d#6,d6,8c6,8a,8c6,c6,2a,32a,32c6,32e6,8a6";
prog_char song_110[] PROGMEM ="Monty P:d=4,o=5,b=200:f6,8e6,d6,8c#6,c6,8b,a#,8a,8g,8a,8a#,a,8g,2c6,8p,8c6,8a,8p,8a,8a,8g#,8a,8f6,8p,8c6,8c6,8p,8a,8a#,8p,8a#,8a#,8p,8c6,2d6,8p,8a#,8g,8p,8g,8g,8f#,8g,8e6,8p,8d6,8d6,8p,8a#,8a,8p,8a,8a,8p,8a#,2c6,8p,8c6";
prog_char song_111[] PROGMEM ="munsters:d=4,o=5,b=160:d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8a4,8d#4,8a4,8b4,c#,8d,p,c,c6,c6,2c6,8a#,8a,8a#,8g,8a,f,p,g,g,2g,8f,8e,8f,8d,8e,2c#,p,d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8d#4,8a4,8d#4,8b4,c#,2d";
prog_char song_112[] PROGMEM ="LightMyFire:d=4,o=5,b=140:8b,16g,16a,8b,8d6,8c6,8b,8a,8g,8a,16f,16a,8c6,8f6,16d6,16c6,16a#,16g,8g#,8g,8g#,16g,16a,8b,8c#6,16b,16a,16g,16f,8e,8f,1a,a";
prog_char song_113[] PROGMEM ="Newyear:d=4,o=5,b=125:a4,d.,8d,d,f#,e.,8d,e,8f#,8e,d.,8d,f#,a,2b.,b,a.,8f#,f#,d,e.,8d,e,8f#,8e,d.,8b4,b4,a4,2d,16p";
prog_char song_114[] PROGMEM ="PinkPanther:d=4,o=5,b=160:8d#,8e,2p,8f#,8g,2p,8d#,8e,16p,8f#,8g,16p,8c6,8b,16p,8d#,8e,16p,8b,2a#,2p,16a,16g,16e,16d,2e";
prog_char song_115[] PROGMEM ="peanuts:d=4,o=5,b=160:f,8g,a,8a,8g,f,2g,f,p,f,8g,a,1a,2p,f,8g,a,8a,8g,f,2g,2f,2f,8g,1g";
prog_char song_116[] PROGMEM ="piccolo:d=4,o=5,b=320:d6,g6,g,g6,8d6,8e6,8d6,8b,g,d,8g,8a,8b,8c6,d6,g6,1d6,d6,g6,g,g6,8d6,8e6,8b,g,d,8f,8g,8a,8b,c6,f6,1c6";
prog_char song_117[] PROGMEM ="Pilipom:d=4,o=5,b=160:16e,16p,16e,16p,16g,16p,16g,16p,16b4,16c#,16d,16p,16g,16p,16g,16p,16e,16p,16e,16p,16g,16p,16g,16p,16b,16g,16b,16e6,8d#6,8p,16d#6,16d6,16b,16a#,16d#6,16d6,16b,16a#,16d#6,16d6,16b,16a#,16b,16c6,16d6,16d#6,16b,16a#,16g,16f#,16e,16d#,16c,16b4,16e,16f#,16d#,16b4,8e,16p";
prog_char song_118[] PROGMEM ="Poison:d=4,o=5,b=112:8d,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8d,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8c,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8c,8d,8a,8d,8e6,8d,8d6,8d,8a,8d,8e6,8d,8d6,8d,2a,8d";
prog_char song_119[] PROGMEM ="polkka:d=4,o=5,b=140:16d,16c#,16d,16e,16f,16e,16f,16f#,16g,16f#,16g,16a,16a#,16a,16g,16a#,16a,16a4,16c#,16e,16a,16g,16f,16e,16f,16e,16d,16c#,16d,16a4,16b4,16c#,16d,16c#,16d,16e,16f,16e,16f,16f#,16g,16f#,16g,16a,16a#,16a,16g,16a#,16a,16a4,16c#,16e,16a,16g,16f,16e,16d,p,2c#,8d,8a4,8d";
/*
prog_char song_120[] PROGMEM ="Popcorn:d=4,o=5,b=160:8c6,8a#,8c6,8g,8d#,8g,c,8c6,8a#,8c6,8g,8d#,8g,c,8c6,8d6,8d#6,16c6,8d#6,16c6,8d#6,8d6,16a#,8d6,16a#,8d6,8c6,8a#,8g,8a#,c6";
prog_char song_121[] PROGMEM ="Postman Pat:d=4,o=5,b=100:16f#,16p,16a,16p,8b,8p,16f#,16p,16a,16p,8b,8p,16f#,16p,16a,16p,16b,16p,16d6,16d6,16c#6,16c#6,16a,16p,b.,8p,32f#,16g,16p,16a,16p,16b,16p,16g,16p,8f#.,8e,8p,32f#,16g,16p,16a,16p,32b.,32b.,16g,16p,8f#.,8e,8p,32f#,16g,16p,16a,16p,16b,16p,16g,16p,16f#,16p,16e,16p,16d,16p,16c#,16p,2d";
prog_char song_122[] PROGMEM ="Rhubarb:d=4,o=5,b=180:8e,8f,8g,d#.,8e,8f,8g,d#.,8e,8f,8g,a#,8a#,2g.,8e,8f,8g,d#.,8e,8f,8g,d#.,e,8e,d,8d,2c.";
prog_char song_123[] PROGMEM ="Rikasmiesjos:d=4,o=5,b=160:8g,8f,8g,8f,e,c,p,8e,8f,8g,8f,8g,8f,8e,8f,8g,8a,8a#,8a,8a#,8a,g,p,g#,g,f#,f,8d#,8d,8c,8d,d#,p,8d#,8d,8c,8d,d#,c,g,p";
prog_char song_124[] PROGMEM ="Kiss:d=4,o=5,b=140:8d4,8e4,f.4,8g4,f4,e4,d4,c4,2d4,8d4,8c4,2d4,8d4,8e4,f.4,8g4,f4,e4,c4,e4,2d.4";
prog_char song_125[] PROGMEM ="Rule B:d=4,o=5,b=100:e.,8e,8f,f,8e,8f.,16e,8d.,16c,2b4,g,f,16e,16c,16f,16d,8g,8f,e,8d.,16c,c";
prog_char song_126[] PROGMEM ="Scatman:d=4,o=5,b=200:8b,16b,32p,8b,16b,32p,8b,2d6,16p,16c#.6,16p.,8d6,16p,16c#6,8b,16p,8f#,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8f#,2p,32p,2d6,16p,16c#6,8p,16d.6,16p.,16c#6,16a.,16p.,8e,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8b,16b,32p,8b,16b,32p,8b,2d6,16p,16c#.6,16p.,8d6,16p,16c#6,8b,16p,8f#,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8f#,2p,32p,2d6,16p,16c#6,8p,16d.6,16p.,16c#6,16a.,16p.,8e,2p.,16c#6,8p,16d.6,16p.,16c#6,16a,8p,8e,2p,32p,16f#.6,16p.,16b.,16p.";
prog_char song_127[] PROGMEM ="Schweine:d=4,o=5,b=180:8g.,16p,16g.,8p,16a.,8p,8a,16p,8b,8p,8b.,16p,16d6,16p,d6,16p,e6,16p,16e6,8p,16b.,8p,16b.,8p,16a.,8p,8a.,16p,16g.,16p,g,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,16b.,16p,8a.,16p,a,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,16e.6,16p,8b.,16p,d.6,8p";
prog_char song_128[] PROGMEM ="ScoobyDoo:d=4,o=5,b=160:8e6,8e6,8d6,8d6,2c6,8d6,e6,2a,8a,b,g,e6,8d6,c6,8d6,2e6,p,8e6,8e6,8d6,8d6,2c6,8d6,f6,2a,8a,b,g,e6,8d6,2c6";
prog_char song_129[] PROGMEM ="shoopsong:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,g,8g,8g,b,8g,g.,8e,8d,8f,e,d.";
prog_char song_130[] PROGMEM ="Skala:d=4,o=5,b=160:32c,32d,32e,32f,32g,32a,32b,32c6,32b,32a,32g,32f,32e,32d,32c";
prog_char song_131[] PROGMEM ="Soap:d=4,o=5,b=125:g,8a,8c6,8p,8a,c6,p,8a,8g,8e,8c,p,g,8a,8c6,p,b,p,8a,8g,8e,8c#,2p,p,8a,8c6,2p,p,8a,8g,2p,8a,8g,8e,c";
prog_char song_132[] PROGMEM = "Song1:d=4,o=5,b=100:2p,8p,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,16e6,16e6,16e6,16d6,16c#6,16b,a,8f#6,d6,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,8d6,8c#6,2d6";
prog_char song_133[] PROGMEM ="Song2:d=4,o=5,b=140:2p,d#6,e6,8f6,a.6,f6,e6,8d#6,g.6,d#6,a#,8p,8g6,8a,8d#6,8f6";
prog_char song_134[] PROGMEM ="song3:d=4,o=5,b=90:2p,8e,8g,8g,8e,a.,8g,g,8p,8g,g,8a,g,g,g,8g,8a,8g,8f,f,8f,g";
prog_char song_135[] PROGMEM ="song4:d=4,o=5,b=112:8p,8d,8d,d,8d,8d,e.,8f#,f#,8f#,8a,d.6,8a,b.,8f#,1e";
prog_char song_136[] PROGMEM ="song5:d=4,o=5,b=100:p,e,e.,8d,2e.,a,c.6,8b,a,g,e,2e,p,p,e,e.,8d,2e.,a,b.,8a,g,a,1e";
prog_char song_137[] PROGMEM ="song6:d=4,o=5,b=90:e,b,b,8b,8b,8c6,8b,8a,8g,f#.,8g,a,8a,8a,8a,8a,8b,8a,2g,f#,8p,8f#,8g,8g,8g,8e,f#.,8f#,8g,8g,8g,8e,f#.,8a,8a,8a,8b,8c6,b,8a,8g,2f#,e";
prog_char song_138[] PROGMEM ="song7:d=4,o=5,b=90:g,d,g,d,g,b,a#,a,g,d,g,d,g";
prog_char song_139[] PROGMEM ="song8:d=4,o=5,b=180:e.,g#.,b.,b,8e6,c#.6,b,8b,b.,p,a,8a,a,8b,a,8g#,8g#,8g#,8g#,g#,8g#,g#,8g#,8g#,f#,p";
prog_char song_140[] PROGMEM ="song9:d=4,o=5,b=140:c6,8b,8a,b,8a,8g,8a#,8a#,8a,8g,a,8g,8f,8p,8f,8f,8e,d,8a,2g";
prog_char song_141[] PROGMEM ="Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g";
prog_char song_142[] PROGMEM ="Stairway:d=4,o=5,b=63:8a6,8c6,8e6,8a6,8b6,8e6,8c6,8b6,8c7,8e6,8c6,8c7,8f#6,8d6,8a6,8f#6,8e6,8c6,8a6,c6,8e6,8c6,8a,8g,8g,8a,a";
prog_char song_143[] PROGMEM ="SWEnd:d=4,o=5,b=225:2c,1f,2g.,8g#,8a#,1g#,2c.,c,2f.,g,g#,c,8g#.,8c.,8c6,1a#.,2c,2f.,g,g#.,8f,c.6,8g#,1f6,2f,8g#.,8g.,8f,2c6,8c.6,8g#.,8f,2c,8c.,8c.,8c,2f,8f.,8f.,8f,2f";
prog_char song_144[] PROGMEM ="Cantina:d=4,o=5,b=250:8a,8p,8d6,8p,8a,8p,8d6,8p,8a,8d6,8p,8a,8p,8g#,a,8a,8g#,8a,g,8f#,8g,8f#,f.,8d.,16p,p.,8a,8p,8d6,8p,8a,8p,8d6,8p,8a,8d6,8p,8a,8p,8g#,8a,8p,8g,8p,g.,8f#,8g,8p,8c6,a#,a,g";
prog_char song_145[] PROGMEM ="StWars:d=4,o=5,b=180:8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6,p,8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6";
prog_char song_146[] PROGMEM ="Star Trek:d=4,o=5,b=63:8f.,16a#,d#.6,8d6,16a#.,16g.,16c.6,f6";
prog_char song_147[] PROGMEM ="SuperMan:d=4,o=5,b=180:8g,8g,8g,c6,8c6,2g6,8p,8g6,8a.6,16g6,8f6,1g6,8p,8g,8g,8g,c6,8c6,2g6,8p,8g6,8a.6,16g6,8f6,8a6,2g.6,p,8c6,8c6,8c6,2b.6,g.6,8c6,8c6,8c6,2b.6,g.6,8c6,8c6,8c6,8b6,8a6,8b6,2c7,8c6,8c6,8c6,8c6,8c6,2c.6";
prog_char song_148[] PROGMEM ="TheSweeney:d=4,o=5,b=125:16a,8c6,a.,p.,16a,8e6,2d6,p.,8p,c6,8c6,16a.,8c6,e.6,8d6,16a,c6,8d6,16a,8c6,a.,p.,16a,8e6,2d6,p.,8p,e6,8e6,16d#.6,8e6,f.6,c6,b,a,2f.6,c6,8g6,1f6";
prog_char song_149[] PROGMEM ="T Birds:d=4,o=4,b=125:8g#5,16f5,16g#5,a#5,8p,16d#5,16f5,8g#5,8a#5,8d#6,16f6,16c6,8d#6,8f6,2a#5,8g#5,16f5,16g#5,a#5,8p,16d#5,16f5,8g#5,8a#5,8d#6,16f6,16c6,8d#6,8f6,2g6,8g6,16a6,16e6,g6,8p,16e6,16d6,8c6,8b5,8a.5,16b5,8c6,8e6,2d6,8d#6,16f6,16c6,d#6,8p,16c6,16a#5,8g#5,8g5,8f.5,16g5,8g#5,8a#5,8c6,8a#5,8g5,8d#5";
prog_char song_150[] PROGMEM ="tears:d=4,o=5,b=112:p,8b,8g,d6,8d6,8b,16a,g.,2p,p,8c6,8c6,8b,8a,8g,b,2a";
prog_char song_151[] PROGMEM ="Time to say good bye:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
prog_char song_152[] PROGMEM ="Timetosay:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
prog_char song_153[] PROGMEM ="Time to say good bye:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
prog_char song_154[] PROGMEM ="Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g";
prog_char song_155[] PROGMEM ="Vil du værra me' mæ hjem:d=4,o=5,b=100:2p,8p,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,16e6,16e6,16e6,16d6,16c#6,16b,a,8f#6,d6,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,8d6,8c#6,2d6";
prog_char song_156[] PROGMEM ="They don't care about us::d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
prog_char song_157[] PROGMEM ="Solskinnsdag:d=4,o=5,b=140:2p,d#6,e6,8f6,a.6,f6,e6,8d#6,g.6,d#6,a#,8p,8g6,8a,8d#6,8f6";
prog_char song_158[] PROGMEM ="More than words:d=4,o=5,b=90:2p,8e,8g,8g,8e,a.,8g,g,8p,8g,g,8a,g,g,g,8g,8a,8g,8f,f,8f,g"; 
prog_char song_159[] PROGMEM ="Bullet me:d=4,o=5,b=112:b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16e6,16f#6,16g6,8f#.6,8g6,8a6,b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16c6,16b,16a,16b";
prog_char song_160[] PROGMEM ="The shoop shoop song:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,g,8g,8g,b,8g,g.,8e,8d,8f,e,d.";
prog_char song_161[] PROGMEM ="Losing my religion::d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
prog_char song_162[] PROGMEM ="Eternally:d=4,o=5,b=112:b,8b,8a,8b,8c6,a,8a,8g,8a,8b,g,8g,8f#,8e,8d#,2e";
prog_char song_163[] PROGMEM ="The final countdown:d=4,o=5,b=125:p,8p,16b,16a,b,e,p,8p,16c6,16b,8c6,8b,a,p,8p,16c6,16b,c6,e,p,8p,16a,16g,8a,8g,8f#,8a,g.,16f#,16g,a.,16g,16a,8b,8a,8g,8f#,e,c6,2b.,16b,16c6,16b,16a,1b";
prog_char song_164[] PROGMEM ="Tears in heaven:d=4,o=5,b=112:p,8b,8g,d6,8d6,8b,16a,g.,2p,p,8c6,8c6,8b,8a,8g,b,2a";
prog_char song_165[] PROGMEM ="Let it be:d=4,o=5,b=100:16e6,8d6,c6,16e6,8g6,8a6,8g.6,16g6,8g6,8e6,16d6,8c6,16a,8g,e.6,p,8e6,16e6,8f.6,8e6,8e6,8d6,16p,16e6,16d6,8d6,2c.6";
prog_char song_166[] PROGMEM ="Frank Mills:d=4,o=5,b=112:e,8e,8e,e,g,d,d,p,8e,8g,c6,c6,c6,e6,a.,8a,a,8b,8c6,8a,8g,g,p,c6,g,8f,8e,f,c6,p,8p,8a,b,8a,8b,1c6";
prog_char song_167[] PROGMEM ="Do you hear the people sing:d=4,o=5,b=140:8e.6,16d6,8c.6,16d6,8e.6,16f6,g6,8e6,8d6,8c6,8b.,16a,8b.,16c6,g,8a,8g,8f,8e.,16g,8c.6,16e6,8d.6,16c#6,8d.6,16a,8c.6,16b,8b.,16c6,d6";
prog_char song_168[] PROGMEM ="Master of the house:d=4,o=5,b=100:16a,16a,16a,16a,8e,8p,16a,16a,16a,16a,8e,8p,16a,16a,16a,16a,16a,16g#,16a,16b,8c#6,8a,8e,8p";
prog_char song_169[] PROGMEM ="Castle on a Cloud:d=4,o=5,b=90:8a,16b,16c6,8b,8a,8a,8g#,a,p,8a,16b,16c6,8b,8a,8g,8f,e,p,8d,16e,16f,8e,8a,8b,8c6,a,p,8d,16e,16f,8e,8d,8c,8b,a";
prog_char song_170[] PROGMEM ="Aquarius:d=4,o=5,b=200:e,f#,1g.,a,g,8f#,e,d,1e.,d,8e,f#,2f#.,e,8e,d,8d,1e";
prog_char song_171[] PROGMEM ="Bogey:d=4,o=5,b=140:8g,8e,p,8p,8e,8f,8g,e6,e6,2c6,8g,8e,p,8p,8e,8f,8e,g,g,2f,8f,8d,p,8p,8d,8e,8f,8g,8e,p,8p,8e,8f#,8e,8d,8g,8p,8e,8f#,8d,8p,8a,8g.,16f#,8g,8a,8g,8f,8e,8d,8c";
prog_char song_172[] PROGMEM ="Greensleaves:d=4,o=5,b=140:g,2a#,c6,d.6,8d#6,d6,2c6,a,f.,8g,a,2a#,g,g.,8f,g,2a,f,2d,g,2a#,c6,d.6,8e6,d6,2c6,a,f.,8g,a,a#.,8a,g,f#.,8e,f#,2g";
prog_char song_173[] PROGMEM ="Canon:d=4,o=5,b=80:8d,8f#,8a,8d6,8c#,8e,8a,8c#6,8d,8f#,8b,8d6,8a,8c#,8f#,8a,8b,8d,8g,8b,8a,8d,8f#,8a,8b,8f#,8g,8b,8c#,8e,8a,8c#6,f#6,8f#,8a,e6,8e,8a,d6,8f#,8a,c#6,8c#,8e,b,8d,8g,a,8f#,8d,b,8d,8g,c#.6";
prog_char song_174[] PROGMEM ="National Anthem:d=4,o=5,b=140:g6,g6,a6,f#.6,8g6,a6,b6,b6,c7,b.6,8a6,g6,a6,g6,f#6,g6";
prog_char song_175[] PROGMEM ="Rule B:d=4,o=5,b=100:e.,8e,8f,f,8e,8f.,16e,8d.,16c,2b4,g,f,16e,16c,16f,16d,8g,8f,e,8d.,16c,c";
prog_char song_176[] PROGMEM ="Monty P:d=4,o=5,b=200:f6,8e6,d6,8c#6,c6,8b,a#,8a,8g,8a,8a#,a,8g,2c6,8p,8c6,8a,8p,8a,8a,8g#,8a,8f6,8p,8c6,8c6,8p,8a,8a#,8p,8a#,8a#,8p,8c6,2d6,8p,8a#,8g,8p,8g,8g,8f#,8g,8e6,8p,8d6,8d6,8p,8a#,8a,8p,8a,8a,8p,8a#,2c6,8p,8c6";
prog_char song_177[] PROGMEM ="Zorba2:d=4,o=5,b=125:16c#6,2d6,2p,16c#6,2d6,2p,32e6,32d6,32c#6,2d6,2p,16c#6,2d6,2p,16b,2c6,2p,32d6,32c6,32b,2c6,2p,16a#,2b,p,8p,32c6,32b,32a,32g,32b,2a,2p,32a,32g,32f#,32a,1g,1p,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6,16e6,16d6,16c#6,16e6,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6";
prog_char song_178[] PROGMEM ="Auld L S:d=4,o=5,b=100:g,c.6,8c6,c6,e6,d.6,8c6,d6,8e6,8d6,c.6,8c6,e6,g6,2a.6,a6,g.6,8e6,e6,c6,d.6,8c6,d6,8e6,8d6,c.6,8a,a,g,2c.6";
prog_char song_179[] PROGMEM ="Black Bear:d=4,o=5,b=180:d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,8c.,16b4,c,8f.,16d#,8d.,16d#,8c.,16d,8a#.4,16c,8d.,16a#4,d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,f,f,8g.,16f,d#,g,2d#";
prog_char song_180[] PROGMEM ="2 Unlimited - No Limits:d=8,o=5,b=180:4e,4e,p,g,g,4e,4e,p,g,g,e,4e,p,g,e,a,a,b,4b,4e,4e,p,g,g,4e,4e,p,g,g,4e,4e,p,g,e,a,4a,4b,4b#";
prog_char song_181[] PROGMEM ="Tubular:d=8,o=5,b=180:e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,b,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,b,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6";
prog_char song_182[] PROGMEM ="PeterGunn:d=4,o=5,b=112:8e,8e,8f#,8e,8g,8e,8a,8g,8e,8e,8f#,8e,8g,8e,8a,8g,1e,c#,2p,p,1e,8c#6,8g,2p";
prog_char song_183[] PROGMEM ="Georgia on my mind:d=4,o=5,b=63:8e,2g.,8p,8e,2d.,8p,p,e,a,e,2d.,8c,8d,e,g,b,a,f,f,8e,e,1c";
prog_char song_184[] PROGMEM ="VanessaMae:d=4,o=6,b=70:32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32c7,32b,16c7,32g#,32p,32g#,32p,32f,32p,16f,32c,32p,32c,32p,32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16g,8p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16c";
*/

PROGMEM const char *songs[] =
{
  song_0,
  song_1,
  song_2,
  song_3,
  song_4,
  song_5,
  song_6,
  song_7,
  song_8,
  song_9,
  song_10,
  song_11,
  song_12,
  song_13,
  song_14,
  song_15,
  song_16,
  song_17,
  song_18,
  song_19,
  song_20,
  song_21,
  song_22,
  song_23,
  song_24,
  song_25,
  song_26,
  song_27,
  song_28,
  song_29,
  song_30,
  song_31,
  song_32,
  song_33,
  song_34,
  song_35,
  song_36,
  song_37,
  song_38,
  song_39,
  song_40,
  song_41,
  song_42,
  song_43,
  song_44,
  song_45,
  song_46,
  song_47,
  song_48,
  song_49,
  song_50,
  song_51,
  song_52,
  song_53,
  song_54,
  song_55,
  song_56,
  song_57,
  song_58,
  song_59,
  song_60,
  song_61,
  song_62,
  song_63,
  song_64,
  song_65,
  song_66,
  song_67,
  song_68,
  song_69,
  song_70,
  song_71,
  song_72,
  song_73,
  song_74,
  song_75,
  song_76,
  song_77,
  song_78,
  song_79,
  song_80,
  song_81,
  song_82,
  song_83,
  song_84,
  song_85,
  song_86,
  song_87,
  song_88,
  song_89,
  song_90,
  song_91,
  song_92,
  song_93,
  song_94,
  song_95,
  song_96,
  song_97,
  song_98,
  song_99,
  song_100,
  song_101,
  song_102,
  song_103,
  song_104,
  song_105,
  song_106,
  song_107,
  song_108,
  song_109,
  song_110,
  song_111,
  song_112,
  song_113,
  song_114,
  song_115,
  song_116,
  song_117,
  song_118,
  song_119,
/*
  song_120,
  song_121,
  song_122,
  song_123,
  song_124,
  song_125,
  song_126,
  song_127,
  song_128,
  song_129,
  song_130,
  song_131,
  song_132,
  song_133,
  song_134,
  song_135,
  song_136,
  song_137,
  song_138,
  song_139,
  song_140,
  song_141,
  song_142,
  song_143,
  song_144,
  song_145,
  song_146,
  song_147,
  song_148,
  song_149,
  song_150,
  song_151,
  song_152,
  song_153,
  song_154,
  song_155,
  song_156,
  song_157,
  song_158,
  song_159,
  song_160,
  song_161,
  song_162,
  song_163,
  song_164,
  song_165,
  song_166,
  song_167,
  song_168,
  song_169,
  song_170,
  song_171,
  song_172,
  song_173,
  song_174,
  song_175,
  song_176,
  song_177,
  song_178,
  song_179,
  song_180,
  song_181,
  song_182,
  song_183,
  song_184,
*/

};

/*

//char *song = "MacGyver:d=4,o=6,b=150:8b4,8e5,8a5,8b5,a5,8e5,8b4,8p,8e5,8a5,8b5,8a5,8e5,b4,8p,8e5,8a5,8b5,a5,8e5,8b4,8p,8a5,8d,8c,8d,8c,8b5,8a5,8b4,8e5,8a5,8b5,a5,8e5,8b4,8p,8e5,8a5,8b5,8a5,8e5,b4,8p,8e5,8a5,8b5,a5,8e5,8b4,8p,8a5,8d,8c,8d,8c,8b5,8a5,b5,8p,2b5,8p,b5,8p,a5,d.,b5,8p,2b5,8p,8b5,8p,2a5,p,8c,8c,8c,8c,8c,8c,2b5,16p,8f#5,8a5,8p,2g5,8p,8c,8c,8p,b5,8a5,8b5,8a5,8g5,8p,e,2a5,16p,8c,8c,8p,2b5,8p,8f#5,8a5,8p,2g5,8p,8c,8c,8p,4b5,8a5,8b5,8a5,8g5,8p,4e,2a5,2b5,32p,8c,8b5,8a5,c,8b5,8a5,8d,8c,8b5,d,8c,8b5,e,8d,8e,f#,b5,g,8p,f#,f,b5,8g,8e,8b5,8f#,8d,8a5,8e,8c,8g5,8d,8b5,8g5,8c,8e5,8b5,8d5,8c,8b5,8a5,8g5,a#5,a5,8g,8g5,8d,8g5,8d#,8d#5,8a#5,8a5,8g5,8g4,8d5,8g4,8d#5,8g4,8a#4,8a4,8g4,8g4,8g4,8g4,8g4,8g4,8g4"; 
//char *song = "The Simpsons:d=4,o=5,b=160:c.6,e6,f#6,8a6,g.6,e6,c6,8a,8f#,8f#,8f#,2g,8p,8p,8f#,8f#,8f#,8g,a#.,8c6,8c6,8c6,c6";
//char *song = "Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
//char *song = "TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";
//char *song = "Entertainer:d=4,o=5,b=140:8d,8d#,8e,c6,8e,c6,8e,2c.6,8c6,8d6,8d#6,8e6,8c6,8d6,e6,8b,d6,2c6,p,8d,8d#,8e,c6,8e,c6,8e,2c.6,8p,8a,8g,8f#,8a,8c6,e6,8d6,8c6,8a,2d6";
//char *song = "Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
//char *song = "Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b.";
//char *song = "Looney:d=4,o=5,b=140:32p,c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
//char *song = "20thCenFox:d=16,o=5,b=140:b,8p,b,b,2b,p,c6,32p,b,32p,c6,32p,b,32p,c6,32p,b,8p,b,b,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,g#,32p,a,32p,b,8p,b,b,2b,4p,8e,8g#,8b,1c#6,8f#,8a,8c#6,1e6,8a,8c#6,8e6,1e6,8b,8g#,8a,2b";
//char *song = "Bond:d=4,o=5,b=80:32p,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d#6,16d#6,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d6,16c#6,16c#7,c.7,16g#6,16f#6,g#.6";
//char *song = "MASH:d=8,o=5,b=140:4a,4g,f#,g,p,f#,p,g,p,f#,p,2e.,p,f#,e,4f#,e,f#,p,e,p,4d.,p,f#,4e,d,e,p,d,p,e,p,d,p,2c#.,p,d,c#,4d,c#,d,p,e,p,4f#,p,a,p,4b,a,b,p,a,p,b,p,2a.,4p,a,b,a,4b,a,b,p,2a.,a,4f#,a,b,p,d6,p,4e.6,d6,b,p,a,p,2b";
//char *song = "StarWars:d=4,o=5,b=45:32p,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#.6,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#6";
//char *song = "GoodBad:d=4,o=5,b=56:32p,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,d#,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,c#6,32a#,32d#6,32a#,32d#6,8a#.,16f#.,32f.,32d#.,c#,32a#,32d#6,32a#,32d#6,8a#.,16g#.,d#";
//char *song = "TopGun:d=4,o=4,b=31:32p,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,16f,d#,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,g#";
//char *song = "A-Team:d=8,o=5,b=125:4d#6,a#,2d#6,16p,g#,4a#,4d#.,p,16g,16a#,d#6,a#,f6,2d#6,16p,c#.6,16c6,16a#,g#.,2a#";
//char *song = "Flinstones:d=4,o=5,b=40:32p,16f6,16a#,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,d6,16f6,16a#.,16a#6,32g6,16f6,16a#.,32f6,32f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,a#,16a6,16d.6,16a#6,32a6,32a6,32g6,32f#6,32a6,8g6,16g6,16c.6,32a6,32a6,32g6,32g6,32f6,32e6,32g6,8f6,16f6,16a#.,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#6,16c7,8a#.6";
//char *song = "Jeopardy:d=4,o=6,b=125:c,f,c,f5,c,f,2c,c,f,c,f,a.,8g,8f,8e,8d,8c#,c,f,c,f5,c,f,2c,f.,8d,c,a#5,a5,g5,f5,p,d#,g#,d#,g#5,d#,g#,2d#,d#,g#,d#,g#,c.7,8a#,8g#,8g,8f,8e,d#,g#,d#,g#5,d#,g#,2d#,g#.,8f,d#,c#,c,p,a#5,p,g#.5,d#,g#";
//char *song = "Gadget:d=16,o=5,b=50:32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,32d#,32f,32f#,32g#,a#,d#6,4d6,32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,8d#";
//char *song = "Smurfs:d=32,o=5,b=200:4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8f#,p,8a#,p,4g#,4p,g#,p,a#,p,b,p,c6,p,4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8b,p,8f,p,4f#";
//char *song = "MahnaMahna:d=16,o=6,b=125:c#,c.,b5,8a#.5,8f.,4g#,a#,g.,4d#,8p,c#,c.,b5,8a#.5,8f.,g#.,8a#.,4g,8p,c#,c.,b5,8a#.5,8f.,4g#,f,g.,8d#.,f,g.,8d#.,f,8g,8d#.,f,8g,d#,8c,a#5,8d#.,8d#.,4d#,8d#.";
//char *song = "LeisureSuit:d=16,o=6,b=56:f.5,f#.5,g.5,g#5,32a#5,f5,g#.5,a#.5,32f5,g#5,32a#5,g#5,8c#.,a#5,32c#,a5,a#.5,c#.,32a5,a#5,32c#,d#,8e,c#.,f.,f.,f.,f.,f,32e,d#,8d,a#.5,e,32f,e,32f,c#,d#.,c#";
//char *song = "MissionImp:d=16,o=6,b=95:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,a#,g,2d,32p,a#,g,2c#,32p,a#,g,2c,a#5,8c,2p,32p,a#5,g5,2f#,32p,a#5,g5,2f,32p,a#5,g5,2e,d#,8d";
//char *song = "The Simpsons:d=4,o=5,b=160:c.6,e6,f#6,8a6,g.6,e6,c6,8a,8f#,8f#,8f#,2g,8p,8p,8f#,8f#,8f#,8g,a#.,8c6,8c6,8c6,c6";
//char *song = "Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
//char *song = "TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";
//char *song = "Entertainer:d=4,o=5,b=140:8d,8d#,8e,c6,8e,c6,8e,2c.6,8c6,8d6,8d#6,8e6,8c6,8d6,e6,8b,d6,2c6,p,8d,8d#,8e,c6,8e,c6,8e,2c.6,8p,8a,8g,8f#,8a,8c6,e6,8d6,8c6,8a,2d6";
//char *song = "Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
//char *song = "Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b.";
//char *song = "Looney:d=4,o=5,b=140:32p,c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
//char *song = "20thCenFox:d=16,o=5,b=140:b,8p,b,b,2b,p,c6,32p,b,32p,c6,32p,b,32p,c6,32p,b,8p,b,b,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,g#,32p,a,32p,b,8p,b,b,2b,4p,8e,8g#,8b,1c#6,8f#,8a,8c#6,1e6,8a,8c#6,8e6,1e6,8b,8g#,8a,2b";
//char *song = "Bond:d=4,o=5,b=80:32p,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d#6,16d#6,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d6,16c#6,16c#7,c.7,16g#6,16f#6,g#.6";
//char *song = "MASH:d=8,o=5,b=140:4a,4g,f#,g,p,f#,p,g,p,f#,p,2e.,p,f#,e,4f#,e,f#,p,e,p,4d.,p,f#,4e,d,e,p,d,p,e,p,d,p,2c#.,p,d,c#,4d,c#,d,p,e,p,4f#,p,a,p,4b,a,b,p,a,p,b,p,2a.,4p,a,b,a,4b,a,b,p,2a.,a,4f#,a,b,p,d6,p,4e.6,d6,b,p,a,p,2b";
//char *song = "StarWars:d=4,o=5,b=45:32p,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#.6,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#6";
//char *song = "GoodBad:d=4,o=5,b=56:32p,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,d#,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,c#6,32a#,32d#6,32a#,32d#6,8a#.,16f#.,32f.,32d#.,c#,32a#,32d#6,32a#,32d#6,8a#.,16g#.,d#";
//char *song = "TopGun:d=4,o=4,b=31:32p,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,16f,d#,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,g#";
//char *song = "A-Team:d=8,o=5,b=125:4d#6,a#,2d#6,16p,g#,4a#,4d#.,p,16g,16a#,d#6,a#,f6,2d#6,16p,c#.6,16c6,16a#,g#.,2a#";
//char *song = "Flinstones:d=4,o=5,b=40:32p,16f6,16a#,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,d6,16f6,16a#.,16a#6,32g6,16f6,16a#.,32f6,32f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,a#,16a6,16d.6,16a#6,32a6,32a6,32g6,32f#6,32a6,8g6,16g6,16c.6,32a6,32a6,32g6,32g6,32f6,32e6,32g6,8f6,16f6,16a#.,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#6,16c7,8a#.6";
//char *song = "Jeopardy:d=4,o=6,b=125:c,f,c,f5,c,f,2c,c,f,c,f,a.,8g,8f,8e,8d,8c#,c,f,c,f5,c,f,2c,f.,8d,c,a#5,a5,g5,f5,p,d#,g#,d#,g#5,d#,g#,2d#,d#,g#,d#,g#,c.7,8a#,8g#,8g,8f,8e,d#,g#,d#,g#5,d#,g#,2d#,g#.,8f,d#,c#,c,p,a#5,p,g#.5,d#,g#";
//char *song = "Gadget:d=16,o=5,b=50:32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,32d#,32f,32f#,32g#,a#,d#6,4d6,32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,8d#";
//char *song = "Smurfs:d=32,o=5,b=200:4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8f#,p,8a#,p,4g#,4p,g#,p,a#,p,b,p,c6,p,4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8b,p,8f,p,4f#";
//char *song = "MahnaMahna:d=16,o=6,b=125:c#,c.,b5,8a#.5,8f.,4g#,a#,g.,4d#,8p,c#,c.,b5,8a#.5,8f.,g#.,8a#.,4g,8p,c#,c.,b5,8a#.5,8f.,4g#,f,g.,8d#.,f,g.,8d#.,f,8g,8d#.,f,8g,d#,8c,a#5,8d#.,8d#.,4d#,8d#.";
//char *song = "LeisureSuit:d=16,o=6,b=56:f.5,f#.5,g.5,g#5,32a#5,f5,g#.5,a#.5,32f5,g#5,32a#5,g#5,8c#.,a#5,32c#,a5,a#.5,c#.,32a5,a#5,32c#,d#,8e,c#.,f.,f.,f.,f.,f,32e,d#,8d,a#.5,e,32f,e,32f,c#,d#.,c#";
//char *song = "smb:d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16d#6,8p,16d6,8p,16c6";
//char *song = "smb_under:d=4,o=6,b=100:32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#";
//char *song = "smbdeath:d=4,o=5,b=90:32c6,32c6,32c6,8p,16b,16f6,16p,16f6,16f.6,16e.6,16d6,16c6,16p,16e,16p,16c";
//char *song = "ducktales:d=4,o=5,b=112:8e6,8e6,16p,16g6,8b6,g#6,p,8e6,8d6,8c6,8d6,8e6,8d6,8c6,8d6,8e6,8e6,16p,16g6,8b6,g#6,p,8e6,8d6,8c6,8d6,8e6,8d6,8c6,8g6,8e6,8e6";
//char *song = "Zelda1:d=4,o=5,b=125:a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,16a#.6,16g#6,16f#.6,8g#.6,16f#.6,2f6,f6,8d#6,16d#6,16f6,2f#6,8f6,8d#6,8c#6,16c#6,16d#6,2f6,8d#6,8c#6,8c6,16c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f,a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,c#7,c7,2a6,f6,2f#.6,a#6,a6,2f6,f6,2f#.6,a#6,a6,2f6,d6,2d#.6,f#6,f6,2c#6,a#,c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f";
//char *song = "smario2:d=4,o=5,b=125:8g,16c,8e,8g.,16c,8e,16g,16c,16e,16g,8b,a,8p,16c,8g,16c,8e,8g.,16c,8e,16g,16c#,16e,16g,8b,a,8p,16b,8c6,16b,8c6,8a.,16c6,8b,16a,8g,16f#,8g,8e.,16c,8d,16e,8f,16e,8f,8b.4,16e,8d.,c";
//char *song = "smb3lvl1:d=4,o=5,b=80:16g,32c,16g.,16a,32c,16a.,16b,32c,16b,16a.,32g#,16a.,16g,32c,16g.,16a,32c,16a,4b.,32p,16c6,32f,16c.6,16d6,32f,16d.6,16e6,32f,16e6,16d.6,32c#6,16d.6,16c6,32f,16c.6,16d6,32f,16d6,4e.6,32p,16g,32c,16g.,16a,32c,16a.,16b,32c,16b,16a.,32g#,16a.,16c6,8c.6,32p,16c6,4c.6";
//char *song = "shinobi:d=4,o=5,b=140:b,f#6,d6,b,g,f#,e,2f#.,a,1f#,p,b,f#6,d6,b,g,f#,e,1f#.,8a,1b.,8a,1f#.,8a,1b.,8a,1f#.";
//char *song = "outrun_magic:d=4,o=5,b=160:f6,d#6,8g#.6,f6,d#6,8c#.6,d#6,c6,2g#.,c#6,c6,8d#.6,c#6,c6,8f.,a#,16c.6,1a#,f6,d#6,8g#.6,f6,d#6,8c#.6,d#6,c6,2g#.,c#6,c6,8d#.6,c#6,c6,16f.,16g#.,c6,2a#.";
//char *song = "Popeye:d=4,o=5,b=140:16g.,16f.,16g.,16p,32p,16c.,16p,32p,16c.,16p,32p,16e.,16d.,16c.,16d.,16e.,16f.,g,8p,16a,16f,16a,16c6,16b,16a,16g,16a,16g,8e,16g,16g,16g,16g,8a,16b,32c6,32b,32c6,32b,32c6,32b,8c6";
//char *song = "Wonderboy:d=4,o=5,b=225:f6,d6,f6,8d6,f6,32p,8f6,d6,f6,d6,e6,c6,e6,8c6,e6,32p,8e6,c6,e6,c6";
//char *song = "smwwd1:d=4,o=5,b=125:a,8f.,16c,16d,16f,16p,f,16d,16c,16p,16f,16p,16f,16p,8c6,8a.,g,16c,a,8f.,16c,16d,16f,16p,f,16d,16c,16p,16f,16p,16a#,16a,16g,2f,16p,8a.,8f.,8c,8a.,f,16g#,16f,16c,16p,8g#.,2g,8a.,8f.,8c,8a.,f,16g#,16f,8c,2c6";
//char *song = "dkong:d=4,o=5,b=160:2c,8d.,d#.,c.,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,2c6";
//char *song = "dkong:d=4,o=5,b=160:2c,8d.,d#.,c.,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,16c6,16b,2c6";
//char *song = "BarbieGirl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
/char *song = "Coca-cola:d=4,o=5,b=125:8f#6,8f#6,8f#6,8f#6,g6,8f#6,e6,8e6,8a6,f#6,d6,2p";
//char *song = "90210:d=4,o=5,b=140:8f,8a#,8c6,d.6,2d6,p,8f,8a#,8c6,8d6,8d#6,f6,f.6,2a#.,8f,8a#,8c6,8d6,8d#6,8f6,8g6,f6,8d#6,d#6,d6,2c.6,8a#,a,a#.,g6,8f6,8d#6,8d6,8d#6,8d6,8a#,f";
//char *song = "Abdelazer:d=4,o=5,b=160:2d,2f,2a,d6,8e6,8f6,8g6,8f6,8e6,8d6,2c#6,a6,8d6,8f6,8a6,8f6,d6,2a6,g6,8c6,8e6,8g6,8e6,c6,2a6,f6,8b,8d6,8f6,8d6,b,2g6,e6,8a,8c#6,8e6,8c6,a,2f6,8e6,8f6,8e6,8d6,c#6,f6,8e6,8f6,8e6,8d6,a,d6,8c#6,8d6,8e6,8d6,2d6";
//char *song = "aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f";
//char *song = "aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f";
//char *song = "Agadoo:d=4,o=5,b=125:8b,8g#,e,8e,8e,e,8e,8e,8e,8e,8d#,8e,f#,8a,8f#,d#,8d#,8d#,d#,8d#,8d#,8d#,8d#,8c#,8d#,e";
//char *song = "Argentina:d=4,o=5,b=70:8e.4,8e4,8e4,8e.4,8f4,8g4,8a4,g4,8p,8g4,8a4,8a4,8g4,c,g4,8f4,e.4,8p,8e4,8f4,8g4,8d4,d4,8d4,8e4,8f4,c4,16p,8c4,8d4,8c4,8e4,g4,16p,8g4,8g4,8a4,c,16p";
//char *song = "Auld L S:d=4,o=5,b=100:g,c.6,8c6,c6,e6,d.6,8c6,d6,8e6,8d6,c.6,8c6,e6,g6,2a.6,a6,g.6,8e6,e6,c6,d.6,8c6,d6,8e6,8d6,c.6,8a,a,g,2c.6";
//char *song = " :d=4,o=5,b=125:g,8a#.,16g,16p,16g,8c6,8g,8f,g,8d.6,16g,16p,16g,8d#6,8d6,8a#,8g,8d6,8g6,16g,16f,16p,16f,8d,8a#,2g,p,16f6,8d6,8c6,8a#,g,8a#.,16g,16p,16g,8c6,8g,8f,g,8d.6,16g,16p,16g,8d#6,8d6,8a#,8g,8d6,8g6,16g,16f,16p,16f,8d,8a#,2g";
//char *song = "axelf:d=4,o=5,b=160:f#,8a.,8f#,16f#,8a#,8f#,8e,f#,8c.6,8f#,16f#,8d6,8c#6,8a,8f#,8c#6,8f#6,16f#,8e,16e,8c#,8g#,f#.";
//char *song = "girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
//char *song = "Black Bear:d=4,o=5,b=180:d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,8c.,16b4,c,8f.,16d#,8d.,16d#,8c.,16d,8a#.4,16c,8d.,16a#4,d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,f,f,8g.,16f,d#,g,2d#";
//char *song = "Bebopalula:d=4,o=5,b=180:2p,2a,a,8a,8e,g,a,a,a,g,a,8p,8a,8a,8e,g,8a,8a,a,a,g,a";
//char *song = "Be-Bop-A-Lula:d=4,o=5,b=180:2p,2a,a,8a,8e,g,a,a,a,g,a,8p,8a,8a,8e,g,8a,8a,a,a,g,a";
//char *song = "Birdy S:d=4,o=5,b=100:16g,16g,16a,16a,16e,16e,8g,16g,16g,16a,16a,16e,16e,8g,16g,16g,16a,16a,16c6,16c6,8b,8b,8a,8g,8f,16f,16f,16g,16g,16d,16d,8f,16f,16f,16g,16g,16d,16d,8f,16f,16f,16g,16g,16a,16b,8c6,8a,8g,8e,c";
//char *song = "Bogey:d=4,o=5,b=140:8g,8e,p,8p,8e,8f,8g,e6,e6,2c6,8g,8e,p,8p,8e,8f,8e,g,g,2f,8f,8d,p,8p,8d,8e,8f,8g,8e,p,8p,8e,8f#,8e,8d,8g,8p,8e,8f#,8d,8p,8a,8g.,16f#,8g,8a,8g,8f,8e,8d,8c";
//char *song = "Bolero:d=4,o=5,b=80:c6,8c6,16b,16c6,16d6,16c6,16b,16a,8c6,16c6,16a,c6,8c6,16b,16c6,16a,16g,16e,16f,2g,16g,16f,16e,16d,16e,16f,16g,16a,g,g,16g,16a,16b,16a,16g,16f,16e,16d,16e,16d,8c,8c,16c,16d,8e,8f,d,2g";
//char *song = "Bulletme:d=4,o=5,b=112:b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16e6,16f#6,16g6,8f#.6,8g6,8a6,b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16c6,16b,16a,16b";
//char *song = " :d=4,o=5,b=80:8d,8f#,8a,8d6,8c#,8e,8a,8c#6,8d,8f#,8b,8d6,8a,8c#,8f#,8a,8b,8d,8g,8b,8a,8d,8f#,8a,8b,8f#,8g,8b,8c#,8e,8a,8c#6,f#6,8f#,8a,e6,8e,8a,d6,8f#,8a,c#6,8c#,8e,b,8d,8g,a,8f#,8d,b,8d,8g,c#.6";
//char *song = "careaboutus:d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
//char *song = "Children:d=4,o=5,b=63:8p,f.6,1p,g#6,8g6,d#.6,1p,g#6,8g6,c.6,1p,g#6,8g6,g#.,1p,16f,16g,16g#,16c6,f.6,1p,g#6,8g6,d#.6,1p,16c#6,16c6,c#6,8c6,g#,2p,g.,g#,8c6,f.";
//char *song = " :d=4,o=5,b=70:16e,16f,16g,16a,16b,16c6,16d6,16d6,16d6,c6,e6,8d6,8c6,16b,16c6,32g,32a,16e,f,f,8g,8a,8b,16c6,8b,16d6,16a,16b,16d6,16d6,16a,16b,16c6,16b,16f,16b,8a,f,e,8c6,d,8b,e,8a,8e,8f,8g,8a,8b";
//char *song = "countdown:d=4,o=5,b=125:p,8p,16b,16a,b,e,p,8p,16c6,16b,8c6,8b,a,p,8p,16c6,16b,c6,e,p,8p,16a,16g,8a,8g,8f#,8a,g.,16f#,16g,a.,16g,16a,8b,8a,8g,8f#,e,c6,2b.,16b,16c6,16b,16a,1b";
//char *song = "Crypt:d=4,o=5,b=160:d#,f#,a,8p,8b,a#,f#,d#,8p,8b4,a#4,d#,f#,a,2b4,8p,a#4,d,f,8p,8f#,g#,b,a#,8p,8g#,f#,f,d#,d,2d#,1p,1p,p.,f,g#,b,8p,8c#6,c6,g#,f,8p,8c#,c,f,g#,b,1c#,c,e,g,8p,8g#,a#,c#6,c6,8p,8a#,g#,g,f,e,2f,16p";
//char *song = "Dallas:d=4,o=5,b=125:8e,a.,8e,e.6,8a,c#6,8b,8c#6,a,e,a,f#6,e6,8c#6,8d6,2e.6,8p,8e,a,f#6,e6,8c#6,8d6,e6,8b,8c#6,a,e,a,8c#6,8d6,b.,8a,2a";
//char *song = "dark:d=4,o=5,b=140:8f#6,8e6,2f#6,16e6,16d#6,16d6,16b,a#,1b,8f#,8e,2f#,8c#,8d,8a#4,1b4,8f#,8e,2f#,16e,16d#,16d,16b4,a#4,1b4,8f#,8e,2f#,c#,2d,2e4,1b4";
//char *song = "DasBoot:d=4,o=5,b=100:d#.4,8d4,8c4,8d4,8d#4,8g4,a#.4,8a4,8g4,8a4,8a#4,8d,2f.,p,f.4,8e4,8d4,8e4,8f4,8a4,c.,8b4,8a4,8b4,8c,8e,2g.,2p";
//char *song = "DavyCrockett:d=4,o=5,b=160:f,8f.,16g,8a.,16g,8f.,16c,d,f,2c,f,g,a,8g.,16f,g,8g.,16a,2g,c,8c.,16c,f,8c.,16c,d,8d.,16d,2g,e,8e.,16e,e,8e.,16d,c,8d.,16e,2f,a,2c.6,d.6,8d6,8c6,a.,8c.,16c,8c.,16c,e,g,2f.,p,a,2c.6,d.6,8d6,8c6,a.,8c.,16c,8c.,16c,e,g,2f.";
//char *song = " :d=4,o=5,b=100:c.,c,8c,c.,d#,8d,d,8c,c,8c,2c.";
//char *song = "Deutschlandlied:d=4,o=5,b=160:2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,8b,8g,2d6,2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,8b,8g,2d6,a,b,8a,8f#,d,c6,b,8a,8f#,d,d6,c6,2b,8b,c#6,8c#6,8d6,2d6,2g6,8f#6,8f#6,8e6,d6,2e6,8d6,8d6,8c6,b,2a,16b,16c6,8d6,8e6,8c6,8a,2g,8b,8a,2g";
//char *song = "Do you hear the people sing:d=4,o=5,b=140:8e.6,16d6,8c.6,16d6,8e.6,16f6,g6,8e6,8d6,8c6,8b.,16a,8b.,16c6,g,8a,8g,8f,8e.,16g,8c.6,16e6,8d.6,16c#6,8d.6,16a,8c.6,16b,8b.,16c6,d6";
//char *song = "don'tcare:d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
//char *song = "don't wanna miss a thing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,16p,a,8g,16f,16p,8f,16p,16c,16p,g,f";
//char *song = "dualingbanjos:d=4,o=5,b=200:8c#,8d,e,c#,d,b4,c#,d#4,b4,p,16c#6,16p,16d6,16p,8e6,8p,8c#6,8p,8d6,8p,8b,8p,8c#6,8p,8a,8p,b,p,a4,a4,b4,c#,d#4,c#,b4,p,8a,8p,8a,8p,8b,8p,8c#6,8p,8a,8p,8c#6,8p,8b";
//char *song = "Dustman:d=4,o=5,b=140:8a.,16a,16b,16p,16c6,16p,8c#6,p,8e6,16c#6,16p,16c#6,16p,16c#6,16p,16c#6,16p,16c#6,16p,c#6,16c#6,16p,16c#6,16p,16c#6,16p,16d6,16p,16c#6,16p,b,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,16b,16p,8b.,16p,16e6,16e6,16e6,16p,16d6,16p,16c#6,16p,16b,16p,a";
//char *song = "Entertainer:d=4,o=5,b=140:8d,8d#,8e,c6,8e,c6,8e,2c.6,8c6,8d6,8d#6,8e6,8c6,8d6,e6,8b,d6,2c6,p,8d,8d#,8e,c6,8e,c6,8e,2c.6,8p,8a,8g,8f#,8a,8c6,e6,8d6,8c6,8a,2d6";
//char *song = "Equidor:d=4,o=5,b=140:8g.,8d.,8a#,8a,8c6,8a,8f,8g.,8d.,8a#,8a,8c6,8a,8f,8a#.,8f.,8d6,8c6,8d6,8c6,8a,8a#.,8g.,8a#,8a,8a#,8a,8f";
//char *song = "Eternally:d=4,o=5,b=112:b,8b,8a,8b,8c6,a,8a,8g,8a,8b,g,8g,8f#,8e,8d#,2e";
//char *song = "Exodus:d=4,o=5,b=70:8c#,f#.,8c#6,b.,8f#,8a,8b,8g#.,16e,f#.,8c#6,e.6,8d#6,8e6,8f#6,8d#.6,16b,2c#6";
//char *song = "Fawlty:d=4,o=5,b=125:8b,8c6,8d6,8c#6,8d6,8c#6,8d6,8g6,e.6,8d6,8c6,8b,8c6,8b,8c6,8b,8c6,8f#6,d.6,8c6,8b,8a,8g,8f#,8g,8f#,8g,8d6,8c6,8b,8c6,8b,8a,8g,8f#,8g,8e,8f#,d,8c6,8d6,8b,8c6,a";
//char *song = "Flntstn:d=4,o=5,b=200:g#,c#,8p,c#6,8a#,g#,c#,8p,g#,8f#,8f,8f,8f#,8g#,c#,d#,2f,2p,g#,c#,8p,c#6,8a#,g#,c#,8p,g#,8f#,8f,8f,8f#,8g#,c#,d#,2c#";
//char *song = "R Friends:d=4,o=5,b=80:c,g,a#4,f,c,g,a#4,8a#,8e,c,g,a#4,f,c,g,a#4,8a#,8e";
//char *song = "Friends Theme #1:DGA+CBAGGDgAAppaaaa";
//char *song = "Friends Theme #2:C+E+e+d+c#A#A+c+D+CC+E+e+d+c#A#A+c+D+C";
//char *song = "Fun2Remix:d=4,o=5,b=320:c6,8c6,g,8g,a,a#,a,g,a,c6,8c6,g,8g,a,a#,a,g,a,a#,8a#,f,8f,g,g#,g,f,g,c6,8c6,c6,8c6,8c6,8c6,c6,c6,c6,c6";
//char *song = "FunkyTown:d=4,o=4,b=125:8c6,8c6,8a#5,8c6,8p,8g5,8p,8g5,8c6,8f6,8e6,8c6,2p,8c6,8c6,8a#5,8c6,8p,8g5,8p,8g5,8c6,8f6,8e6,8c6";
//char *song = ":d=4,o=5,b=125:8g.,8g.,8g,8c,8c,8d,8d,8g.,8g.,8g,8a#,8a#,8c6,8c6,8g.,8g.,8g,8c,8c,8d,8d,8g.,8g.,8g,8a#,8a#,8c6,8d6";
//char *song = "National Anthem:d=4,o=5,b=140:g6,g6,a6,f#.6,8g6,a6,b6,b6,c7,b.6,8a6,g6,a6,g6,f#6,g6";
//char *song = "Greensleaves:d=4,o=5,b=140:g,2a#,c6,d.6,8d#6,d6,2c6,a,f.,8g,a,2a#,g,g.,8f,g,2a,f,2d,g,2a#,c6,d.6,8e6,d6,2c6,a,f.,8g,a,a#.,8a,g,f#.,8e,f#,2g";
//char *song = "Halloween:d=4,o=5,b=180:8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6,8f#";
//char *song = "HeyBaby:d=4,o=5,b=900:8a4,16a#4,16b4,16c,16c#,16d,16d#,16e,16f,16f#,16g,16g#,16a,16a#,16b,16c6,8c#6,16d6,16d#6,16e6,16f6,p,p,16a4,16a#4,16b4,16c,16c#,16d,16d#,16e,16f,16f#,16g,16g#,16a,16a#,16b,16a#,16a,16g#,16g,16f#,16f,16e,16d#,16d,16c#,16c,16b4,16a#4,16a4";
//char *song = "Hitchcoc:d=4,o=5,b=200:16c,16p,16f4,8p,8f,32g,32p,16f,32p,16e,32p,16d,32p,16e,8p,16f,32p,16g,8p.,16c,16p,16f4,8p,8f,32g,32p,16f,32p,16e,32p,16d,32p,16e,8p,16f,32p,16g,8p.,16c,16p,16f4,8p,16g#,32p,8c6,16p,16a#,32p,16g#,8p,16c6,32p,8d#6,16p,16c#6,32p,16c6,8p,16d#6,32p,8g6,16p,16f6,32p,16e6,32p,16c#6,32p,16c6,32p,16a#,32p,16g#,32p,16g,32p,8f4";
//char *song = "Ickley:d=4,o=5,b=100:8d,8g.,16g,8g,8d,g,8p,8a,8b.,16b,8b,8a,b,8p,8b,a,g,g,f#,2g";
//char *song = "Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
//char *song = "GirlFromIpane:d=4,o=5,b=160:g.,8e,8e,d,g.,8e,e,8e,8d,g.,e,e,8d,g,8g,8e,e,8e,8d,f,d,d,8d,8c,e,c,c,8c,a#4,2c";
//char *song = "I swear:d=4,o=5,b=125:2p,p,8b,8a.,16f#,8e,p,8p,8f#,8g#,a,8a,8a,a,8c#,8d,2e,8p,8f#,8g#,2e";
//char *song = "Itchy:d=4,o=5,b=160:8c6,8a,p,8c6,8a6,p,8c6,8a,8c6,8a,8c6,8a6,p,8p,8c6,8d6,8e6,8p,8e6,8f6,8g6,p,8d6,8c6,d6,8f6,a#6,a6,2c7";
//char *song = "Jesus:d=4,o=5,b=100:f,8d,2a#4,g,8d#,2a#4,g#,8f,8g#,g,8f,8d#,f,8d,2a#4";
//char *song = "Killing:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a : 1114";
//char *song = "Killing me softly:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a."; 
//char *song = "killing:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a.";
//char *song = "killing me softly:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a.";
//char *song = "killing me softly:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a.";
//char *song = "KnightRider:d=4,o=5,b=63:16e,32f,32e,8b,16e6,32f6,32e6,8b,16e,32f,32e,16b,16e6,d6,8p,p,16e,32f,32e,8b,16e6,32f6,32e6,8b,16e,32f,32e,16b,16e6,f6,p";
//char *song = "KnightRider:d=4,o=5,b=125:16e,16p,16f,16e,16e,16p,16e,16e,16f,16e,16e,16e,16d#,16e,16e,16e,16e,16p,16f,16e,16e,16p,16f,16e,16f,16e,16e,16e,16d#,16e,16e,16e,16d,16p,16e,16d,16d,16p,16e,16d,16e,16d,16d,16d,16c,16d,16d,16d,16d,16p,16e,16d,16d,16p,16e,16d,16e,16d,16d,16d,16c,16d,16d,16d";
//char *song = "Lazy:d=4,o=5,b=160:8d.4,8f4,16d4,8g4,16f4,8d.4,8f4,16d4,8g4,16f4,8d4,8p,8p";
//char *song = "Walk of Life:d=4,o=5,b=160:b.,b.,p,8p,8f#,8g,b,8g,8f,e.,e.,p,2p,p,8f,8g,b.,b.,p,8p,8f,8g,b,8g,f,e.,e.,p,8p,8f,8g,b,8g,8f,8e";
//char *song = "Little Wing:d=4,o=5,b=63:2p,p,8e,8g,8a,a.,p,8a,8g,8g,e.,p,8d,8c,8d,16e,8d.,8p,8d,8d,8c,2a";
//char *song = "Looney:d=4,o=5,b=140:c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
//char *song = "losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
//char *song = "losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
//char *song = "losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
//char *song = "Lulay Lula:d=4,o=4,b=100:d6,d6,c#6,2d6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2d6,a6,2g6,f6,2e6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2f#6";
//char *song = "Lulay Lula:d=4,o=4,b=100:d6,d6,c#6,2d6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2d6,a6,2g6,f6,2e6,f6,8e6,8e6,e6,d6,2c#.6,d6,e6,f6,g6,2e6,2f#6";
//char *song = "Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,p,2c.6,a,8c6,8a,8f,p,2p";
//char *song = "Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,p,2c.6,a,8c6,8a,8f,p,2p";
//char *song = "Barbie girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#,8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#,8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
//char *song = "Match of the day:d=4,o=5,b=100:8c,8f,8a,8c.6,16a,8a,8a,8a,a,8a#,8c.6,16a,8g,8a,8a#,8c,8e,8g,8a#.,16g,8g,8g,8g,g,8a,8a#.,16g,8f,8g,8a,8c,8f,8a,8c.6,16a,8a,8a,8a,a,8a#,8c.6,16a,8a#,8c6,d6,8d6,8e6,8f6,16f6,8e6,16e6,8d6,8f6,8c6,8c6,8d6,8c6,16a#,8a,16a,8g,f";
//char *song = "missathing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,16p,a,8g,16f,16p,8f,16p,16c,16p,g,f";
//char *song = "Mission:d=4,o=6,b=100:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,16g,8p,16g,8p,16a#,16p,16c,16p,16g,8p,16g,8p,16f,16p,16f#,16p,16g,8p,16g,8p,16a#,16p,16c,16p,16g,8p,16g,8p,16f,16p,16f#,16p,16a#,16g,2d,32p,16a#,16g,2c#,32p,16a#,16g,2c,16p,16a#5,16c";
//char *song = " :d=4,o=5,b=112:8e6,8e6,8e6,8e6,8e6,8e6,16e,16a,16c6,16e6,8d#6,8d#6,8d#6,8d#6,8d#6,8d#6,16f,16a,16c6,16d#6,d6,8c6,8a,8c6,c6,2a,32a,32c6,32e6,8a6";
//char *song = "Monty P:d=4,o=5,b=200:f6,8e6,d6,8c#6,c6,8b,a#,8a,8g,8a,8a#,a,8g,2c6,8p,8c6,8a,8p,8a,8a,8g#,8a,8f6,8p,8c6,8c6,8p,8a,8a#,8p,8a#,8a#,8p,8c6,2d6,8p,8a#,8g,8p,8g,8g,8f#,8g,8e6,8p,8d6,8d6,8p,8a#,8a,8p,8a,8a,8p,8a#,2c6,8p,8c6";
//char *song = "munsters:d=4,o=5,b=160:d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8a4,8d#4,8a4,8b4,c#,8d,p,c,c6,c6,2c6,8a#,8a,8a#,8g,8a,f,p,g,g,2g,8f,8e,8f,8d,8e,2c#,p,d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8d#4,8a4,8d#4,8b4,c#,2d";
//char *song = "munsters:d=4,o=5,b=160:d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8a4,8d#4,8a4,8b4,c#,8d,p,c,c6,c6,2c6,8a#,8a,8a#,8g,8a,f,p,g,g,2g,8f,8e,8f,8d,8e,2c#,p,d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8d#4,8a4,8d#4,8b4,c#,2d";
//char *song = "Muppet:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
//char *song = "Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
//char *song = "LightMyFire:d=4,o=5,b=140:8b,16g,16a,8b,8d6,8c6,8b,8a,8g,8a,16f,16a,8c6,8f6,16d6,16c6,16a#,16g,8g#,8g,8g#,16g,16a,8b,8c#6,16b,16a,16g,16f,8e,8f,1a,a";
//char *song = "Newyear:d=4,o=5,b=125:a4,d.,8d,d,f#,e.,8d,e,8f#,8e,d.,8d,f#,a,2b.,b,a.,8f#,f#,d,e.,8d,e,8f#,8e,d.,8b4,b4,a4,2d,16p";
//char *song = "PinkPanther:d=4,o=5,b=160:8d#,8e,2p,8f#,8g,2p,8d#,8e,16p,8f#,8g,16p,8c6,8b,16p,8d#,8e,16p,8b,2a#,2p,16a,16g,16e,16d,2e";
//char *song = "peanuts:d=4,o=5,b=160:f,8g,a,8a,8g,f,2g,f,p,f,8g,a,1a,2p,f,8g,a,8a,8g,f,2g,2f,2f,8g,1g";
//char *song = "piccolo:d=4,o=5,b=320:d6,g6,g,g6,8d6,8e6,8d6,8b,g,d,8g,8a,8b,8c6,d6,g6,1d6,d6,g6,g,g6,8d6,8e6,8b,g,d,8f,8g,8a,8b,c6,f6,1c6";
//char *song = "Pilipom:d=4,o=5,b=160:16e,16p,16e,16p,16g,16p,16g,16p,16b4,16c#,16d,16p,16g,16p,16g,16p,16e,16p,16e,16p,16g,16p,16g,16p,16b,16g,16b,16e6,8d#6,8p,16d#6,16d6,16b,16a#,16d#6,16d6,16b,16a#,16d#6,16d6,16b,16a#,16b,16c6,16d6,16d#6,16b,16a#,16g,16f#,16e,16d#,16c,16b4,16e,16f#,16d#,16b4,8e,16p";
//char *song = "Poison:d=4,o=5,b=112:8d,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8d,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8c,8d,8a,8d,8e6,8d,8d6,8d,8f#,8g,8c6,8f#,8g,8c6,8e,8d,8c,8d,8a,8d,8e6,8d,8d6,8d,8a,8d,8e6,8d,8d6,8d,2a,8d";
//char *song = "polkka:d=4,o=5,b=140:16d,16c#,16d,16e,16f,16e,16f,16f#,16g,16f#,16g,16a,16a#,16a,16g,16a#,16a,16a4,16c#,16e,16a,16g,16f,16e,16f,16e,16d,16c#,16d,16a4,16b4,16c#,16d,16c#,16d,16e,16f,16e,16f,16f#,16g,16f#,16g,16a,16a#,16a,16g,16a#,16a,16a4,16c#,16e,16a,16g,16f,16e,16d,p,2c#,8d,8a4,8d";
//char *song = "Popcorn:d=4,o=5,b=160:8c6,8a#,8c6,8g,8d#,8g,c,8c6,8a#,8c6,8g,8d#,8g,c,8c6,8d6,8d#6,16c6,8d#6,16c6,8d#6,8d6,16a#,8d6,16a#,8d6,8c6,8a#,8g,8a#,c6";
//char *song = "Postman Pat:d=4,o=5,b=100:16f#,16p,16a,16p,8b,8p,16f#,16p,16a,16p,8b,8p,16f#,16p,16a,16p,16b,16p,16d6,16d6,16c#6,16c#6,16a,16p,b.,8p,32f#,16g,16p,16a,16p,16b,16p,16g,16p,8f#.,8e,8p,32f#,16g,16p,16a,16p,32b.,32b.,16g,16p,8f#.,8e,8p,32f#,16g,16p,16a,16p,16b,16p,16g,16p,16f#,16p,16e,16p,16d,16p,16c#,16p,2d";
//char *song = "Rhubarb:d=4,o=5,b=180:8e,8f,8g,d#.,8e,8f,8g,d#.,8e,8f,8g,a#,8a#,2g.,8e,8f,8g,d#.,8e,8f,8g,d#.,e,8e,d,8d,2c.";
//char *song = "Rikasmiesjos:d=4,o=5,b=160:8g,8f,8g,8f,e,c,p,8e,8f,8g,8f,8g,8f,8e,8f,8g,8a,8a#,8a,8a#,8a,g,p,g#,g,f#,f,8d#,8d,8c,8d,d#,p,8d#,8d,8c,8d,d#,c,g,p";
//char *song = "Kiss:d=4,o=5,b=140:8d4,8e4,f.4,8g4,f4,e4,d4,c4,2d4,8d4,8c4,2d4,8d4,8e4,f.4,8g4,f4,e4,c4,e4,2d.4";
//char *song = "Rule B:d=4,o=5,b=100:e.,8e,8f,f,8e,8f.,16e,8d.,16c,2b4,g,f,16e,16c,16f,16d,8g,8f,e,8d.,16c,c";
//char *song = "Scatman:d=4,o=5,b=200:8b,16b,32p,8b,16b,32p,8b,2d6,16p,16c#.6,16p.,8d6,16p,16c#6,8b,16p,8f#,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8f#,2p,32p,2d6,16p,16c#6,8p,16d.6,16p.,16c#6,16a.,16p.,8e,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8b,16b,32p,8b,16b,32p,8b,2d6,16p,16c#.6,16p.,8d6,16p,16c#6,8b,16p,8f#,2p.,16c#6,8p,16d.6,16p.,16c#6,16b,8p,8f#,2p,32p,2d6,16p,16c#6,8p,16d.6,16p.,16c#6,16a.,16p.,8e,2p.,16c#6,8p,16d.6,16p.,16c#6,16a,8p,8e,2p,32p,16f#.6,16p.,16b.,16p.";
//char *song = "Schweine:d=4,o=5,b=180:8g.,16p,16g.,8p,16a.,8p,8a,16p,8b,8p,8b.,16p,16d6,16p,d6,16p,e6,16p,16e6,8p,16b.,8p,16b.,8p,16a.,8p,8a.,16p,16g.,16p,g,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,16b.,16p,8a.,16p,a,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,16e.6,16p,8b.,16p,d.6,8p";
//char *song = "ScoobyDoo:d=4,o=5,b=160:8e6,8e6,8d6,8d6,2c6,8d6,e6,2a,8a,b,g,e6,8d6,c6,8d6,2e6,p,8e6,8e6,8d6,8d6,2c6,8d6,f6,2a,8a,b,g,e6,8d6,2c6";
//char *song = "shoopsong:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,g,8g,8g,b,8g,g.,8e,8d,8f,e,d.";
//char *song = "The Simpsons:d=4,o=5,b=160:c.6,e6,f#6,8a6,g.6,e6,c6,8a,8f#,8f#,8f#,2g,8p,8p,8f#,8f#,8f#,8g,a#.,8c6,8c6,8c6,c6";
//char *song = "Skala:d=4,o=5,b=160:32c,32d,32e,32f,32g,32a,32b,32c6,32b,32a,32g,32f,32e,32d,32c";
//char *song = "Smoke:d=4,o=5,b=112:c,d#,f.,c,d#,8f#,f,p,c,d#,f.,d#,c,2p,8p,c,d#,f.,c,d#,8f#,f,p,c,d#,f.,d#,c,p";
//char *song = "Soap:d=4,o=5,b=125:g,8a,8c6,8p,8a,c6,p,8a,8g,8e,8c,p,g,8a,8c6,p,b,p,8a,8g,8e,8c#,2p,p,8a,8c6,2p,p,8a,8g,2p,8a,8g,8e,c";
//char *song = "Song1:d=4,o=5,b=100:2p,8p,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,16e6,16e6,16e6,16d6,16c#6,16b,a,8f#6,d6,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,8d6,8c#6,2d6";
//char *song = "Song2:d=4,o=5,b=140:2p,d#6,e6,8f6,a.6,f6,e6,8d#6,g.6,d#6,a#,8p,8g6,8a,8d#6,8f6";
//char *song = "song3:d=4,o=5,b=90:2p,8e,8g,8g,8e,a.,8g,g,8p,8g,g,8a,g,g,g,8g,8a,8g,8f,f,8f,g";
//char *song = "song4:d=4,o=5,b=112:8p,8d,8d,d,8d,8d,e.,8f#,f#,8f#,8a,d.6,8a,b.,8f#,1e";
//char *song = "song5:d=4,o=5,b=100:p,e,e.,8d,2e.,a,c.6,8b,a,g,e,2e,p,p,e,e.,8d,2e.,a,b.,8a,g,a,1e";
//char *song = "song6:d=4,o=5,b=90:e,b,b,8b,8b,8c6,8b,8a,8g,f#.,8g,a,8a,8a,8a,8a,8b,8a,2g,f#,8p,8f#,8g,8g,8g,8e,f#.,8f#,8g,8g,8g,8e,f#.,8a,8a,8a,8b,8c6,b,8a,8g,2f#,e";
//char *song = "song7:d=4,o=5,b=90:g,d,g,d,g,b,a#,a,g,d,g,d,g";
//char *song = "song8:d=4,o=5,b=180:e.,g#.,b.,b,8e6,c#.6,b,8b,b.,p,a,8a,a,8b,a,8g#,8g#,8g#,8g#,g#,8g#,g#,8g#,8g#,f#,p";
//char *song = "song9:d=4,o=5,b=140:c6,8b,8a,b,8a,8g,8a#,8a#,8a,8g,a,8g,8f,8p,8f,8f,8e,d,8a,2g";
//char *song = "Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g";
//char *song = "Stairway:d=4,o=5,b=63:8a6,8c6,8e6,8a6,8b6,8e6,8c6,8b6,8c7,8e6,8c6,8c7,8f#6,8d6,8a6,8f#6,8e6,8c6,8a6,c6,8e6,8c6,8a,8g,8g,8a,a";
//char *song = "SWEnd:d=4,o=5,b=225:2c,1f,2g.,8g#,8a#,1g#,2c.,c,2f.,g,g#,c,8g#.,8c.,8c6,1a#.,2c,2f.,g,g#.,8f,c.6,8g#,1f6,2f,8g#.,8g.,8f,2c6,8c.6,8g#.,8f,2c,8c.,8c.,8c,2f,8f.,8f.,8f,2f";
//char *song = "Cantina:d=4,o=5,b=250:8a,8p,8d6,8p,8a,8p,8d6,8p,8a,8d6,8p,8a,8p,8g#,a,8a,8g#,8a,g,8f#,8g,8f#,f.,8d.,16p,p.,8a,8p,8d6,8p,8a,8p,8d6,8p,8a,8d6,8p,8a,8p,8g#,8a,8p,8g,8p,g.,8f#,8g,8p,8c6,a#,a,g";
//char *song = "StWars:d=4,o=5,b=180:8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6,p,8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6";
//char *song = "Star Trek:d=4,o=5,b=63:8f.,16a#,d#.6,8d6,16a#.,16g.,16c.6,f6";
//char *song = "SuperMan:d=4,o=5,b=180:8g,8g,8g,c6,8c6,2g6,8p,8g6,8a.6,16g6,8f6,1g6,8p,8g,8g,8g,c6,8c6,2g6,8p,8g6,8a.6,16g6,8f6,8a6,2g.6,p,8c6,8c6,8c6,2b.6,g.6,8c6,8c6,8c6,2b.6,g.6,8c6,8c6,8c6,8b6,8a6,8b6,2c7,8c6,8c6,8c6,8c6,8c6,2c.6";
//char *song = "TheSweeney:d=4,o=5,b=125:16a,8c6,a.,p.,16a,8e6,2d6,p.,8p,c6,8c6,16a.,8c6,e.6,8d6,16a,c6,8d6,16a,8c6,a.,p.,16a,8e6,2d6,p.,8p,e6,8e6,16d#.6,8e6,f.6,c6,b,a,2f.6,c6,8g6,1f6";
//char *song = "T Birds:d=4,o=4,b=125:8g#5,16f5,16g#5,a#5,8p,16d#5,16f5,8g#5,8a#5,8d#6,16f6,16c6,8d#6,8f6,2a#5,8g#5,16f5,16g#5,a#5,8p,16d#5,16f5,8g#5,8a#5,8d#6,16f6,16c6,8d#6,8f6,2g6,8g6,16a6,16e6,g6,8p,16e6,16d6,8c6,8b5,8a.5,16b5,8c6,8e6,2d6,8d#6,16f6,16c6,d#6,8p,16c6,16a#5,8g#5,8g5,8f.5,16g5,8g#5,8a#5,8c6,8a#5,8g5,8d#5";
//char *song = "tears:d=4,o=5,b=112:p,8b,8g,d6,8d6,8b,16a,g.,2p,p,8c6,8c6,8b,8a,8g,b,2a";
//char *song = "Time to say good bye:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
//char *song = "Timetosay:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
//char *song = "Time to say good bye:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b";
//char *song = "Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g";
//char *song = "Vil du værra me' mæ hjem:d=4,o=5,b=100:2p,8p,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,16e6,16e6,16e6,16d6,16c#6,16b,a,8f#6,d6,16f#6,16f#6,16f#6,16e6,16d6,16c#6,b,8f#6,e6,8d6,8c#6,2d6";
//char *song = "They don't care about us::d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,16e,16d,16e,16d,16e,16d,16c,16d,d";
//char *song = "Solskinnsdag:d=4,o=5,b=140:2p,d#6,e6,8f6,a.6,f6,e6,8d#6,g.6,d#6,a#,8p,8g6,8a,8d#6,8f6";
//char *song = "More than words:d=4,o=5,b=90:2p,8e,8g,8g,8e,a.,8g,g,8p,8g,g,8a,g,g,g,8g,8a,8g,8f,f,8f,g"; 
//char *song = "Bullet me:d=4,o=5,b=112:b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16e6,16f#6,16g6,8f#.6,8g6,8a6,b.6,g.6,16f#6,16g6,16f#6,8d.6,8e6,p,16c6,16b,16a,16b";
//char *song = "The shoop shoop song:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,g,8g,8g,b,8g,g.,8e,8d,8f,e,d.";
//char *song = "Losing my religion::d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a,a,8a,a,8g#,2g#";
//char *song = "Eternally:d=4,o=5,b=112:b,8b,8a,8b,8c6,a,8a,8g,8a,8b,g,8g,8f#,8e,8d#,2e";
//char *song = "The final countdown:d=4,o=5,b=125:p,8p,16b,16a,b,e,p,8p,16c6,16b,8c6,8b,a,p,8p,16c6,16b,c6,e,p,8p,16a,16g,8a,8g,8f#,8a,g.,16f#,16g,a.,16g,16a,8b,8a,8g,8f#,e,c6,2b.,16b,16c6,16b,16a,1b";
//char *song = "Tears in heaven:d=4,o=5,b=112:p,8b,8g,d6,8d6,8b,16a,g.,2p,p,8c6,8c6,8b,8a,8g,b,2a";
//char *song = "Let it be:d=4,o=5,b=100:16e6,8d6,c6,16e6,8g6,8a6,8g.6,16g6,8g6,8e6,16d6,8c6,16a,8g,e.6,p,8e6,16e6,8f.6,8e6,8e6,8d6,16p,16e6,16d6,8d6,2c.6";
//char *song = "Frank Mills:d=4,o=5,b=112:e,8e,8e,e,g,d,d,p,8e,8g,c6,c6,c6,e6,a.,8a,a,8b,8c6,8a,8g,g,p,c6,g,8f,8e,f,c6,p,8p,8a,b,8a,8b,1c6";
//char *song = "Do you hear the people sing:d=4,o=5,b=140:8e.6,16d6,8c.6,16d6,8e.6,16f6,g6,8e6,8d6,8c6,8b.,16a,8b.,16c6,g,8a,8g,8f,8e.,16g,8c.6,16e6,8d.6,16c#6,8d.6,16a,8c.6,16b,8b.,16c6,d6";
//char *song = "Master of the house:d=4,o=5,b=100:16a,16a,16a,16a,8e,8p,16a,16a,16a,16a,8e,8p,16a,16a,16a,16a,16a,16g#,16a,16b,8c#6,8a,8e,8p";
//char *song = "Castle on a Cloud:d=4,o=5,b=90:8a,16b,16c6,8b,8a,8a,8g#,a,p,8a,16b,16c6,8b,8a,8g,8f,e,p,8d,16e,16f,8e,8a,8b,8c6,a,p,8d,16e,16f,8e,8d,8c,8b,a";
//char *song = "Aquarius:d=4,o=5,b=200:e,f#,1g.,a,g,8f#,e,d,1e.,d,8e,f#,2f#.,e,8e,d,8d,1e";
//char *song = "Bogey:d=4,o=5,b=140:8g,8e,p,8p,8e,8f,8g,e6,e6,2c6,8g,8e,p,8p,8e,8f,8e,g,g,2f,8f,8d,p,8p,8d,8e,8f,8g,8e,p,8p,8e,8f#,8e,8d,8g,8p,8e,8f#,8d,8p,8a,8g.,16f#,8g,8a,8g,8f,8e,8d,8c";
//char *song = "Greensleaves:d=4,o=5,b=140:g,2a#,c6,d.6,8d#6,d6,2c6,a,f.,8g,a,2a#,g,g.,8f,g,2a,f,2d,g,2a#,c6,d.6,8e6,d6,2c6,a,f.,8g,a,a#.,8a,g,f#.,8e,f#,2g";
//char *song = "Canon:d=4,o=5,b=80:8d,8f#,8a,8d6,8c#,8e,8a,8c#6,8d,8f#,8b,8d6,8a,8c#,8f#,8a,8b,8d,8g,8b,8a,8d,8f#,8a,8b,8f#,8g,8b,8c#,8e,8a,8c#6,f#6,8f#,8a,e6,8e,8a,d6,8f#,8a,c#6,8c#,8e,b,8d,8g,a,8f#,8d,b,8d,8g,c#.6";
//char *song = "National Anthem:d=4,o=5,b=140:g6,g6,a6,f#.6,8g6,a6,b6,b6,c7,b.6,8a6,g6,a6,g6,f#6,g6";
//char *song = "Rule B:d=4,o=5,b=100:e.,8e,8f,f,8e,8f.,16e,8d.,16c,2b4,g,f,16e,16c,16f,16d,8g,8f,e,8d.,16c,c";
//char *song = "Monty P:d=4,o=5,b=200:f6,8e6,d6,8c#6,c6,8b,a#,8a,8g,8a,8a#,a,8g,2c6,8p,8c6,8a,8p,8a,8a,8g#,8a,8f6,8p,8c6,8c6,8p,8a,8a#,8p,8a#,8a#,8p,8c6,2d6,8p,8a#,8g,8p,8g,8g,8f#,8g,8e6,8p,8d6,8d6,8p,8a#,8a,8p,8a,8a,8p,8a#,2c6,8p,8c6";
//char *song = "Zorba2:d=4,o=5,b=125:16c#6,2d6,2p,16c#6,2d6,2p,32e6,32d6,32c#6,2d6,2p,16c#6,2d6,2p,16b,2c6,2p,32d6,32c6,32b,2c6,2p,16a#,2b,p,8p,32c6,32b,32a,32g,32b,2a,2p,32a,32g,32f#,32a,1g,1p,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6,16e6,16d6,16c#6,16e6,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6";
//char *song = "Auld L S:d=4,o=5,b=100:g,c.6,8c6,c6,e6,d.6,8c6,d6,8e6,8d6,c.6,8c6,e6,g6,2a.6,a6,g.6,8e6,e6,c6,d.6,8c6,d6,8e6,8d6,c.6,8a,a,g,2c.6";
//char *song = "Black Bear:d=4,o=5,b=180:d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,8c.,16b4,c,8f.,16d#,8d.,16d#,8c.,16d,8a#.4,16c,8d.,16a#4,d#,d#,8g.,16d#,8a#.,16g,d#,d#,8g.,16d#,8a#.,16g,f,f,f,8g.,16f,d#,g,2d#";
//char *song = "2 Unlimited - No Limits:d=8,o=5,b=180:4e,4e,p,g,g,4e,4e,p,g,g,e,4e,p,g,e,a,a,b,4b,4e,4e,p,g,g,4e,4e,p,g,g,4e,4e,p,g,e,a,4a,4b,4b#";
//char *song = "Tubular:d=8,o=5,b=180:e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,b,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6,e,b,e,a,e,b,e,g,a,e,c6,e,d6,e,b,c6";
//char *song = "PeterGunn:d=4,o=5,b=112:8e,8e,8f#,8e,8g,8e,8a,8g,8e,8e,8f#,8e,8g,8e,8a,8g,1e,c#,2p,p,1e,8c#6,8g,2p";
//char *song = "Georgia on my mind:d=4,o=5,b=63:8e,2g.,8p,8e,2d.,8p,p,e,a,e,2d.,8c,8d,e,g,b,a,f,f,8e,e,1c";
//char *song = "VanessaMae:d=4,o=6,b=70:32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32c7,32b,16c7,32g#,32p,32g#,32p,32f,32p,16f,32c,32p,32c,32p,32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16g,8p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16c";


/*


Har en drøm:d=4,o=5,b=112:8p,8d,8d,d,8d,8d,e.,8f#,f#,8f#,8a,d.6,8a,b.,8f#,1e 


I swear:d=4,o=5,b=125:2p,p,8b,8a.,16f#,8e,p,8p,8f#,8g#,a,8a,8a,a,8c#,8d,2e,8p,8f#,8g#,2e 


Little wing:d=4,o=5,b=63:2p,p,8e,8g,8a,a.,p,8a,8g,8g,e.,p,8d,8c,8d,16e,8d.,8p,8d,8d,8c,2a 


Walk of life:d=4,o=5,b=160:b.,b.,p,8p,8f#,8g,b,8g,8f,e.,e.,p,2p,p,8f,8g,b.,b.,p,8p,8f,8g,b,8g,f,e.,e.,p,8p,8f,8g,b,8g,8f,8e 


Be-Bop-A-Lula:d=4,o=5,b=180:2p,2a,a,8a,8e,g,a,a,a,g,a,8p,8a,8a,8e,g,8a,8a,a,a,g,a 


Vårsøg:d=4,o=5,b=100:p,e,e.,8d,2e.,a,c.6,8b,a,g,e,2e,p,p,e,e.,8d,2e.,a,b.,8a,g,a,1e 


Byssan lull:d=4,o=5,b=90:e,b,b,8b,8b,8c6,8b,8a,8g,f#.,8g,a,8a,8a,8a,8a,8b,8a,2g,f#,8p,8f#,8g,8g,8g,8e,f#.,8f#,8g,8g,8g,8e,f#.,8a,8a,8a,8b,8c6,b,8a,8g,2f#,e 


Skala:d=4,o=5,b=160:32c,32d,32e,32f,32g,32a,32b,32c6,32b,32a,32g,32f,32e,32d,32c 


Vinsjan på Kaia:d=4,o=5,b=90:g,d,g,d,g,b,a#,a,g,d,g,d,g 


I don't want to miss a thing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,16p,a,8g,16f,16p,8f,16p,16c,16p,g,f 


Barbie girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f# 


Time to say goodbye:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,16f#,16g,16a,16g,16e,16a,16b,c6,b 


Det går likar no:d=4,o=5,b=180:e.,g#.,b.,b,8e6,c#.6,b,8b,b.,p,a,8a,a,8b,a,8g#,8g#,8g#,8g#,g#,8g#,g#,8g#,8g#,f#,p 


Killing me softly:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a. 


Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,p,2c.6,a,8c6,8a,8f,p,2p 


Snørosa:d=4,o=5,b=140:c6,8b,8a,b,8a,8g,8a#,8a#,8a,8g,a,8g,8f,8p,8f,8f,8e,d,8a,2g 


Popcorn:d=4,o=5,b=112:8c6,8a#,8c6,8g,8d#,8g,c,8c6,8a#,8c6,8g,8d#,8g,c,8c6,8d6,8d#6,16c6,8d#6,16c6,8d#6,8d6,16a#,8d6,16a#,8d6,8c6,8a#,8g,8a#,c6 



Where the wild roses grow:d=4,o=5,b=63:c.6,e.6,8f6,8g6,8f6,e.6,16e6,16f6,8e6,8d6,c.6,16g,16a,8g,8d,e


Theme from "Beverly Hills 90210"
90210:d=4,o=5,b=140:8f,8a#,8c6,d.6,2d6,p,8f,8a#,8c6,8d6,8d#6,
f6,f.6,2a#.,8f,8a#,8c6,8d6,8d#6,8f6,8g6,f6,8d#6,d#6,
d6,2c.6,8a#,a,a#.,g6,8f6,8d#6,8d6,8d#6,8d6,8a#,f 
 


--------------------------------------------------------------------------------
Theme from "Dallas"
Dallas:d=4,o=5,b=125:8e,a.,8e,e.6,8a,c#6,8b,8c#6,a,e,a,
f#6,e6,8c#6,8d6,2e.6,8p,8e,a,f#6,e6,8c#6,8d6,e6,8b,
8c#6,a,e,a,8c#6,8d6,b.,8a,2a 
 


--------------------------------------------------------------------------------
Theme from "The Adams Family"
 
aadams:d=4,o=5,b=160:8c,f,8a,f,8c,b4,2g,8f,e,8g,e,8e4,a4,
2f,8c,f,8a,f,8c,b4,2g,8f,e,8c,d,8e,1f,8c,8d,8e,8f,1p,8d,8e,
8f#,8g,1p,8d,8e,8f#,8g,p,8d,8e,8f#,8g,p,8c,8d,8e,8f
 


--------------------------------------------------------------------------------
Theme from "Knight Rider"
KnightRider:d=4,o=5,b=125:16e,16p,16f,16e,16e,16p,16e,16e,16f,
16e,16e,16e,16d#,16e,16e,16e,16e,16p,16f,16e,16e,16p,16f,16e,16f,
16e,16e,16e,16d#,16e,16e,16e,16d,16p,16e,16d,16d,16p,16e,16d,
16e,16d,16d,16d,16c,16d,16d,16d,16d,16p,16e,16d,16d,16p,16e,16d,
16e,16d,16d,16d,16c,16d,16d,16d
 


--------------------------------------------------------------------------------
Theme from "Axel F"
axelf:d=4,o=5,b=160:f#,8a.,8f#,16f#,8a#,8f#,8e,f#,8c.6,8f#,
16f#,8d6,8c#6,8a,8f#,8c#6,8f#6,16f#,8e,16e,8c#,8g#,f#.
 


--------------------------------------------------------------------------------
Theme from "The Munsters"
munsters:d=4,o=5,b=160:d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8a4,
8d#4,8a4,8b4,c#,8d,p,c,c6,c6,2c6,8a#,8a,8a#,8g,8a,f,p,g,g,2g,8f,
8e,8f,8d,8e,2c#,p,d,8f,8d,8g#,8a,d6,8a#,8a,2g,8f,8g,a,8d#4,
8a4,8d#4,8b4,c#,2d
 


--------------------------------------------------------------------------------
Theme from "The Pink Panther"
PinkPanther:d=4,o=5,b=160:8d#,8e,2p,8f#,8g,2p,8d#,8e,16p,8f#,
8g,16p,8c6,8b,16p,8d#,8e,16p,8b,2a#,2p,16a,16g,16e,16d,2e
 


--------------------------------------------------------------------------------
"Bolero"
Bolero:d=4,o=5,b=80:c6,8c6,16b,16c6,16d6,16c6,16b,16a,8c6,16c6,
16a,c6,8c6,16b,16c6,16a,16g,16e,16f,2g,16g,16f,16e,16d,16e,16f,
16g,16a,g,g,16g,16a,16b,16a,16g,16f,16e,16d,16e,16d,8c,8c,16c,
16d,8e,8f,d,2g
 


--------------------------------------------------------------------------------
"Barbie Girl" Aqua
girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,
8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f# 


--------------------------------------------------------------------------------
Theme from " Das Boot"
DasBoot:d=4,o=5,b=100:d#.4,8d4,8c4,8d4,8d#4,8g4,
a#.4,8a4,8g4,8a4,8a#4,8d,2f.,p,f.4,8e4,8d4,8e4,8f4,8a4,
c.,8b4,8a4,8b4,8c,8e,2g.,2p


--------------------------------------------------------------------------------
Don´t cry for me Argentina
Argentina:d=4,o=5,b=70:8e.4,8e4,8e4,8e.4,8f4,8g4,8a4,g4,8p,8g4,
8a4,8a4,8g4,c,g4,8f4,e.4,8p,8e4,8f4,8g4,8d4,d4,8d4,8e4,8f4,c4,
16p,8c4,8d4,8c4,8e4,g4,16p,8g4,8g4,8a4,c,16p


--------------------------------------------------------------------------------
"Männer sind Scweine" Die Ärzte
Schweine:d=4,o=5,b=180:8g.,16p,16g.,8p,16a.,8p,8a,16p,8b,8p,8b.,
16p,16d6,16p,d6,16p,e6,16p,16e6,8p,16b.,8p,16b.,8p,16a.,8p,8a.,
16p,16g.,16p,g,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,
16b.,16p,8a.,16p,a,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,
16p,16e.6,16p,8b.,16p,d.6,8p


--------------------------------------------------------------------------------
"Killing me softly" Fugees
killing:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,
8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a. 


--------------------------------------------------------------------------------
"I don´t want to miss a thing" Aerosmith
missathing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,
16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,
16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,
16p,a,8g,16f,16p,8f,16p,16c,16p,g,f


--------------------------------------------------------------------------------
"Time to say good bye"
Timetosay:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,
16f#,16g,16a,16g,16e,16a,16b,c6,b 


--------------------------------------------------------------------------------
"They don´t care about us" Micheal Jackson
careaboutus::d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,
16e,16d,16e,16d,16e,16d,16c,16d,d 


--------------------------------------------------------------------------------
"The shoop shoop song" Cher
shoopshoop:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,
g,8g,8g,b,8g,g.,8e,8d,8f,e,d.


--------------------------------------------------------------------------------
"Losing my Religion" 
losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,
8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,
8b,8f#,a,a,8a,a,8g#,2g#


--------------------------------------------------------------------------------
"Macarena" 
Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,
8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,
8a,p,2c.6,a,8c6,8a,8f,p,2p


--------------------------------------------------------------------------------
"Halloween"
Halloween:d=4,o=5,b=180:8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,
8g,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,
8f#,8f#,8c#6,8f#,8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,
8d6,8p,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8d6,8g,8g,8d6,
8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,
8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6


--------------------------------------------------------------------------------
"Deutschlandlied"
Deutschlandlied:d=4,o=5,b=160:2g,8a,b,a,c6,b,8a,8f#,g,e6,
d6,c6,b,a,8b,8g,2d6,2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,
8b,8g,2d6,a,b,8a,8f#,d,c6,b,8a,8f#,d,d6,c6,2b,8b,c#6,
8c#6,8d6,2d6,2g6,8f#6,8f#6,8e6,d6,2e6,8d6,8d6,8c6,b,
2a,16b,16c6,8d6,8e6,8c6,8a,2g,8b,8a,2g
 

Theme from "The Pink Panther"
PinkPanther:d=4,o=5,b=160:8d#,8e,2p,8f#,8g,2p,8d#,8e,16p,8f#,
8g,16p,8c6,8b,16p,8d#,8e,16p,8b,2a#,2p,16a,16g,16e,16d,2e
 


--------------------------------------------------------------------------------
"Bolero"
Bolero:d=4,o=5,b=80:c6,8c6,16b,16c6,16d6,16c6,16b,16a,8c6,16c6,
16a,c6,8c6,16b,16c6,16a,16g,16e,16f,2g,16g,16f,16e,16d,16e,16f,
16g,16a,g,g,16g,16a,16b,16a,16g,16f,16e,16d,16e,16d,8c,8c,16c,
16d,8e,8f,d,2g
 


--------------------------------------------------------------------------------
"Barbie Girl" Aqua
girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,
8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f# 


--------------------------------------------------------------------------------
Theme from " Das Boot"
DasBoot:d=4,o=5,b=100:d#.4,8d4,8c4,8d4,8d#4,8g4,
a#.4,8a4,8g4,8a4,8a#4,8d,2f.,p,f.4,8e4,8d4,8e4,8f4,8a4,
c.,8b4,8a4,8b4,8c,8e,2g.,2p


--------------------------------------------------------------------------------
Don´t cry for me Argentina
Argentina:d=4,o=5,b=70:8e.4,8e4,8e4,8e.4,8f4,8g4,8a4,g4,8p,8g4,
8a4,8a4,8g4,c,g4,8f4,e.4,8p,8e4,8f4,8g4,8d4,d4,8d4,8e4,8f4,c4,
16p,8c4,8d4,8c4,8e4,g4,16p,8g4,8g4,8a4,c,16p


--------------------------------------------------------------------------------
"Männer sind Scweine" Die Ärzte
Schweine:d=4,o=5,b=180:8g.,16p,16g.,8p,16a.,8p,8a,16p,8b,8p,8b.,
16p,16d6,16p,d6,16p,e6,16p,16e6,8p,16b.,8p,16b.,8p,16a.,8p,8a.,
16p,16g.,16p,g,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,16p,
16b.,16p,8a.,16p,a,16p,8d.6,16p,16d6,8p,8c6,16p,8c.6,16p,8b,
16p,16e.6,16p,8b.,16p,d.6,8p


--------------------------------------------------------------------------------
"Killing me softly" Fugees
killing:d=4,o=5,b=90:p,8e,f,g,8a,a,8g,d,g.,p,8p,8a,g,8f,8e,
8e,8f,2c,p,8e,f,g,8a,a,8g,a,b,8b,8c6,8b,16a,8g,16a,2a,2a. 


--------------------------------------------------------------------------------
"I don´t want to miss a thing" Aerosmith
missathing:d=4,o=5,b=125:2p,16a,16p,16a,16p,8a.,16p,a,
16g,16p,2g,16p,p,8p,16g,16p,16g,16p,16g,8g.,16p,c6,
16a#,16p,a,8g,f,g,8d,8f.,16p,16f,16p,16c,8c,
16p,a,8g,16f,16p,8f,16p,16c,16p,g,f


--------------------------------------------------------------------------------
"Time to say good bye"
Timetosay:d=4,o=5,b=80:8c,16d,16e,16d,16e,16f#,16g,
16f#,16g,16a,16g,16e,16a,16b,c6,b 


--------------------------------------------------------------------------------
"They don´t care about us" Micheal Jackson
careaboutus::d=4,o=5,b=125:16f,16e,16f,16e,16f,16e,8d,
16e,16d,16e,16d,16e,16d,16c,16d,d 


--------------------------------------------------------------------------------
"The shoop shoop song" Cher
shoopshoop:d=4,o=5,b=125:g,g,g,g,f,8f,8d#,8f,8d#,c,g,8g,8g,
g,8g,8g,b,8g,g.,8e,8d,8f,e,d.


--------------------------------------------------------------------------------
"Losing my Religion" 
losing:d=4,o=5,b=63:2p,8b,8c#6,8b,8f#,a.,8a,8a,a,a,a.,8b,8c#6,
8b,8f#,a.,8a,8a,a,a.,8b,8c#6,8b,8f#,a.,8a,8a,a,a.,8b,8c#6,
8b,8f#,a,a,8a,a,8g#,2g#


--------------------------------------------------------------------------------
"Macarena" 
Macarena:d=4,o=5,b=180:f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,8a,8c,8c,f,
8f,8f,f,8f,8f,8f,8f,8f,8f,8d,8c,p,f,8f,8f,f,8f,8f,8f,8f,8f,8f,8f,
8a,p,2c.6,a,8c6,8a,8f,p,2p


--------------------------------------------------------------------------------
"Halloween"
Halloween:d=4,o=5,b=180:8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,
8g,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,
8f#,8f#,8c#6,8f#,8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,
8d6,8p,8d6,8g,8g,8d6,8g,8g,8d6,8g,8d#6,8g,8d6,8g,8g,8d6,
8g,8g,8d6,8g,8d#6,8g,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,
8d6,8f#,8c#6,8f#,8f#,8c#6,8f#,8f#,8c#6,8f#,8d6


--------------------------------------------------------------------------------
"Deutschlandlied"
Deutschlandlied:d=4,o=5,b=160:2g,8a,b,a,c6,b,8a,8f#,g,e6,
d6,c6,b,a,8b,8g,2d6,2g,8a,b,a,c6,b,8a,8f#,g,e6,d6,c6,b,a,
8b,8g,2d6,a,b,8a,8f#,d,c6,b,8a,8f#,d,d6,c6,2b,8b,c#6,
8c#6,8d6,2d6,2g6,8f#6,8f#6,8e6,d6,2e6,8d6,8d6,8c6,b,
2a,16b,16c6,8d6,8e6,8c6,8a,2g,8b,8a,2g
VanessaMae:d=4,o=6,b=70:32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32c7,32b,16c7,32g#,32p,32g#,32p,32f,32p,16f,32c,32p,32c,32p,32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16g,8p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,32d7,32d7,32p,32d7,32p,32d7,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16c
VanessaMae:d=4,o=6,b=70:32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32c7,32b,16c7,32g#,32p,32g#,32p,32f,32p,16f,32c,32p,32c,32p,32c7,32b,16c7,32g,32p,32g,32p,32d#,32p,32d#,32p,32c,32p,32c,32p,32g,32f,32d#,32d,32c,32d,32d#,32c,32d#,32f,16g,8p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,16d7,32p,32d7,32p,32d7,32p,16d7,32c7,32d7,32a#,32d7,32a,32d7,32g,16d7,32p,32d7,32p,32d7,32p,32g,32f,32d#, 32d,32c,32d,32d#,32c,32d#,32d,8c
Verve:d=4,o=5,b=180:e,g,e,f,d,2f,a#,f,2a#,a,f,2a,p,e,g,e,f,d,2f,a#,f,2a#,a,f,2a,p
Verve:d=4,o=5,b=80:8b4,8d,8b4,8c,8a4,8c,8p,8f,8c,8f,8p,8e,8c,8e,8p,8b4,8d,8b4,8c,8a4,8c,8p,8f,8c,8f,8p,8e,8c,8e,8p,8d,8b4,8d,8b4,8p,8c,8c,8p,8f,8c,8f,8g,8e,8c,8e,8p,8b4,8d,8b4,8c,8a4,8c,8p,8f,8c,8f,8p,8e,8c,8e
Walk of Life:d=4,o=5,b=160:b.,b.,p,8p,8f#,8g,b,8g,8f,e.,e.,p,2p,p,8f,8g,b.,b.,p,8p,8f,8g,b,8g,f,e.,e.,p,8p,8f,8g,b,8g,8f,8e
Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g
Wannabe:d=4,o=5,b=125:16g,16g,16g,16g,8g,8a,8g,8e,8p,16c,16d,16c,8d,8d,8c,e,p,8g,8g,8g,8a,8g,8e,8p,c6,8c6,8b,8g,8a,16b,16a,g 
Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b.
Yaketysax:d=4,o=5,b=125:8d.,16e,8g,8g,16e,16d,16a4,16b4,16d,16b4,8e,16d,16b4,16a4,16b4,8a4,16a4,16a#4,16b4,16d,16e,16d,g,p,16d,16e,16d,8g,8g,16e,16d,16a4,16b4,16d,16b4,8e,16d,16b4,16a4,16b4,8d,16d,16d,16f#,16a,8f,d,p,16d,16e,16d,8g,16g,16g,8g,16g,16g,8g,8g,16e,8e.,8c,8c,8c,8c,16e,16g,16a,16g,16a#,8g,16a,16b,16a#,16b,16a,16b,8d6,16a,16b,16d6,8b,8g,8d,16e6,16b,16b,16d,8a,8g,g
YMCA:d=4,o=5,b=160:8c#6,8a#,2p,8a#,8g#,8f#,8g#,8a#,c#6,8a#,c#6,8d#6,8a#,2p,8a#,8g#,8f#,8g#,8a#,c#6,8a#,c#6,8d#6,8b,2p,8b,8a#,8g#,8a#,8b,d#6,8f#6,d#6,f.6,d#.6,c#.6,b.,a#,g#
Zorba2:d=4,o=5,b=125:16c#6,2d6,2p,16c#6,2d6,2p,32e6,32d6,32c#6,2d6,2p,16c#6,2d6,2p,16b,2c6,2p,32d6,32c6,32b,2c6,2p,16a#,2b,p,8p,32c6,32b,32a,32g,32b,2a,2p,32a,32g,32f#,32a,1g,1p,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6,16e6,16d6,16c#6,16e6,8c#6,8d6,8d6,8d6,8d6,8d6,8d6,8d6,8c#6,8d6,8d6,8d6,8d6,8d6
*/


