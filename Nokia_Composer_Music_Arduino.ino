/* 
 *  Nokia Composer Music player for arduino
 * 
 * Developed by Irshad PI
 * http://github.com/irshadshalu
 * http://fb.com/irshadshalu
 * 
 *
 * inspired from a youtube video and corresponding tutorial by Akshay James 
 * link :  https://diyhacking.com/arduino-speaker/
 * Thank you Akshay.
 * 
 * you can find more music at http://home.arcor.de/malayalakavitha/mp3.htm
 * and english at http://nokia.nigelcoldwell.co.uk/tunes.html
 * and all over internet ;)
 * 
 */

 // including custom library file, all the function bodies are contained in it. refer to it for more details of implementation
#include"composer_music.h"


/*  Musics
 *   
*/

// this is fur elise by beethoven , ; ( januvariyil viriyumo)
char* elise = "8e2 8#d2 8e2 8#d2 8e2 8b1 8d2 8c2 4a1 8- 8c1 8e1 8a1 4b1 8- 8e1 8#g1 8b1 4c2 8- 8e1 8e2 8#d2 8e2 8#d2 8e2 8b1 8d2 8c2 4a1 8- 8c1 8e1 8a1 4b1 8- 8e1 8c2 8b1 4a1";
char* thumbi_vaa = "8g1 8a1 8#a1 16- 8g1 8a1 16g1 8#f1 8d1 8g1 8a1 8#a1 16- 8g1 8a1 16#f1 8g1 8- 8b1 8b1 8c2 16- 8#a1 8a#1 16a1 16a1 16g1 16#f1 16g1 8b1 8b1 8c2 16- 8#a1 8#a1 16#a1 8a1";
char* nee_manimukiladakal = "1a2 8g2 8#f2 8g2 8#f2 4g2 8f2 8e2 8f2 8e2 8f2 8e2 4f2 8e2 8f2 4d2 1a2 8g2 8#f2 8g2 8#f2 4g2 8f2 8e2 8f2 8e2 8f2 8e2 4f2 8e2 8f2 8d2 8e2 8- 8d2 8e2 8- 8d2 2e2 8e2 8a2 4e2 8d2 8e2 8- 8d2 8e2 8- 8d2 8e2";
char* kayalarikath = "8e2 8f2 8f2 4f2 8f2 8f2 8e2 8f2 8f2 4f2 8f2 8f2 8e2 8f2 8g2 4e2 8f2 8g2 8e2 8f2 8g2 8g2 8f2 8e2 8- 8e2 8f2 8g2 8f2 8e2 8f2 8g2 8g2 8#g2 8g2 8f2 8g2 8f2 8e2 8e2 8f2 8g2 8f2 8e2 8f2 8g2 8e2 8f2 8g2";
char* cid_moosa = "2e1 4#f1 4- 4g1 8g1 8a1 4b1 4- 4b1 8b1 8g1 8a1 8a1 8a1 8#f1 8g1 8a1 8g1 8#f1 4e1 4- 2e1 4#f1 4- 4g1 8g1 8a1 4b1 4- 4b1 8b1 8g1 8a1 8a1 8a1 8#f1 8g1 8#a1 8g1 8#f1 4e1";

void setup() {
  Serial.begin(9600);
  // the prototype for playMusic function is 
  // playMusic(Pin-No, music string, tempo,frequency factor);
    playMusic(A3,elise,130,4.5);
    delay(500);
    playMusic(A3,cid_moosa,169,3.0);
  // playMusic(A3,thumbi_vaa,80,4.0);
  // playMusic(A3,nee_manimukiladakal,170,2.5);
 
  /*
   * 
   * Function usage : Explanation
   * 
   * pin-no : (int) PWM supported pin where the speaker is connected, the other terminal of speaker should be connected to ground.
   * 
   * Music string : (char* )character array where the music is stored in nokia composer music format, refer above elise;
   * 
   * tempo : (int) speed of playing, in BPM beats per minute 
   * 
   * frequency factor : (float) try adjusting this 1-5 if the pitch doesn't match, could depend on the speaker and board as well.
   * 
   */
}

void loop() {
}