/*
 * 
* Header file for Nokia Composer Music player for arduino
* This is the header file to give old nokia phone composer music support to arduino song playing.
* Created on 6th December 2016
* by Irshad P I  
* http://github.com/irshadshalu 
* http://fb.com/irshadshalu
* 
* 
* Reference from 
* https://www.arduino.cc/en/Tutorial/toneMelody
*
* inspired from arduino cover for songs tutorial by Akshay James
* Original tutorial at https://diyhacking.com/arduino-speaker/
* Thanks Akshay.
* Only Lower caps notes are supported..
*/
int musicCurIndex = 0;

void getNext(char* song,char *note){

  // check if end
  if(song[musicCurIndex] == '\0'){
    note[0]='\0';
    return;
  }
  // skip spaces
  while(song[musicCurIndex] == ' '){
    musicCurIndex++;
  }
  int i = 0;
  while(song[musicCurIndex] != ' ' && song[musicCurIndex]){
    note[i++] = song[musicCurIndex++];
  }
  note[i]='\0';
}

int getDur(char* note){
  int i=0;
  int dur = 0;
  // initial duration parsing.
  while(note[i]>='0' && note[i] <='9'){
    dur = dur*10 + (note[i]-'0');
    i++;
  }
  return dur;
}
int getMelody(char* note){
  int i = 0;
  while(note[i]>='0' && note[i] <='9'){
    i++;
  }
  long numericValue = 0;
  // converting note string to some standard value.
  while(note[i] != '\0'){
    numericValue = numericValue*70 + (note[i]-30);
    i++;
  }

  // returning it's corresponding melody value.
  switch(numericValue){
    case  4926 :  return  4699 ;
    case  29564 :  return  1480 ;
    case  4925 :  return  2349 ;
    case  4922 :  return  294 ;
    case  4923 :  return  587 ;
    case  4920 :  return  73 ;
    case  4921 :  return  147 ;
    case  4919 :  return  37 ;
    case  5135 :  return  3136 ;
    case  5134 :  return  1568 ;
    case  5133 :  return  784 ;
    case  5132 :  return  392 ;
    case  5131 :  return  196 ;
    case  5130 :  return  98 ;
    case  5129 :  return  49 ;
    case  29211 :  return  233 ;
    case  29210 :  return  117 ;
    case  29209 :  return  58 ;
    case  29215 :  return  3729 ;
    case  29214 :  return  1865 ;
    case  29213 :  return  932 ;
    case  29212 :  return  466 ;
    case  4782 :  return  494 ;
    case  4924 :  return  1175 ;
    case  4784 :  return  1976 ;
    case  4785 :  return  3951 ;
    case  4778 :  return  31 ;
    case  4779 :  return  62 ;
    case  4780 :  return  123 ;
    case  4781 :  return  247 ;
    case  29562 :  return  370 ;
    case  29563 :  return  740 ;
    case  29560 :  return  93 ;
    case  29561 :  return  185 ;
    case  29559 :  return  46 ;
    case  4993 :  return  659 ;
    case  4992 :  return  330 ;
    case  4995 :  return  2637 ;
    case  4994 :  return  1319 ;
    case  4989 :  return  41 ;
    case  4991 :  return  165 ;
    case  4990 :  return  82 ;
    case  29356 :  return  4435 ;
    case  29353 :  return  554 ;
    case  29352 :  return  277 ;
    case  29355 :  return  2217 ;
    case  29354 :  return  1109 ;
    case  29349 :  return  35 ;
    case  29351 :  return  139 ;
    case  29350 :  return  69 ;
    case  4856 :  return  4186 ;
    case  4851 :  return  131 ;
    case  4850 :  return  65 ;
    case  4849 :  return  33 ;
    case  4855 :  return  2093 ;
    case  4854 :  return  1047 ;
    case  4853 :  return  523 ;
    case  4852 :  return  262 ;
    case  4783 :  return  988 ;
    case  5059 :  return  44 ;
    case  5060 :  return  87 ;
    case  5061 :  return  175 ;
    case  5062 :  return  349 ;
    case  5063 :  return  698 ;
    case  5064 :  return  1397 ;
    case  5065 :  return  2794 ;
    case  29422 :  return  311 ;
    case  29423 :  return  622 ;
    case  29424 :  return  1245 ;
    case  29425 :  return  2489 ;
    case  29419 :  return  39 ;
    case  29420 :  return  78 ;
    case  29421 :  return  156 ;
    case  29426 :  return  4978 ;
    case  29565 :  return  2960 ;
    case  4709 :  return  55 ;
    case  4711 :  return  220 ;
    case  4710 :  return  110 ;
    case  4713 :  return  880 ;
    case  4712 :  return  440 ;
    case  4715 :  return  3520 ;
    case  4714 :  return  1760 ;
    case  29629 :  return  52 ;
    case  29631 :  return  208 ;
    case  29630 :  return  104 ;
    case  29633 :  return  831 ;
    case  29632 :  return  415 ;
    case  29635 :  return  3322 ;
    case  29634 :  return  1661 ;
    default: return 0;
  }
}


void playMusic(int tonepin,char* song,int tempo,float frequency_factor){
  char note[10];
   // beat length calculation from:
   // http://music.stackexchange.com/questions/24140/how-can-i-find-the-length-in-seconds-of-a-quarter-note-crotchet-if-i-have-a-te
  float beat_length = (float)60/(float)tempo;

  musicCurIndex = 0;
  
  do{
    // obtain next note
    getNext(song,note);
    // break if end
    if(note[0]=='\0')
     break;

   // getting duration, 4000 for 4/8
    float duration = beat_length*4000/getDur(note);

    // getting next melody
    int melody = getMelody(note);
    // playing tone for the specified duration
    tone(tonepin,melody*frequency_factor,duration);
    // waiting for tone to play
    delay(duration);
    noTone(tonepin);
  } while(note[0] != '\0');
}
