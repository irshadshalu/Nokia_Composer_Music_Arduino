[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](irshadpi77@gmail.com)

# Nokia Composer Music Player for Arduino
A melody playing library for arduino supporting nokia composer music format



	
	The prototype for playMusic function is 

	playMusic(Pin-No, music string, tempo,frequency factor); in composer_music.h
 
 	explanation:

		pin-no : (int) PWM supported pin where the speaker is connected, the other terminal of speaker should be connected to ground.
		
		Music string : (char* )character array where the music is stored in nokia composer music format, refer above elise;
		
		tempo : (int) speed of playing, in BPM beats per minute 
		
		frequency factor : (float) try adjusting this 1-5 if the pitch doesn't match, could depend on the speaker and board as well.
		
 
 
  inspired from a youtube video and corresponding tutorial by *Akshay James*
  
  link :  https://diyhacking.com/arduino-speaker/
  
  Thank you Akshay.
  
  you can find more music at http://home.arcor.de/malayalakavitha/mp3.htm
  and english at http://nokia.nigelcoldwell.co.uk/tunes.html
  and all over internet ;)
  
  
  You can use this library for playing any kinds of beats or music on your Arduino board. Do add credits to the original source if you use it in any of your project.
  
  If you liked this project, Consider buying me a coffee!
  <a href="https://www.buymeacoffee.com/irshadpi" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/black_img.png" alt="Buy Me A Coffee" style="height: auto !important;width: auto !important;" ></a>
  
