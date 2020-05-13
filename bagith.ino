#define REC 2 // pin 2 is used for recording
#define PLAY_E 3 // pin 3 is used for playback-edge trigger
// when PLAY_E goes HIGH device will playbak STARTS and continues
// ISD1820 Arduino Voice Recorder for Robojax.com 

#define PLAY_L 4 // pin 4 is used for playback  
// when PLAY_L is HIGH it will playback. As soon as it goes LOW playback STOPS
// So you have to keep it HIGH to keep playing


#define FT 5 // pin 5 is used for feed through
// if the SPI (speaker) pin is used to send Audio to other device, 
// set FT to high and any audio from microphone will pass through the SPI connector
// and will NOT record

#define playTime 5 // playback time 5 seconds
#define recordTime 3000 // recording time 3 seconds
#define playLTime 900 // press and release playback time 0.9 seconds

const int xPin = A0;
const int yPin = A1;
const int zPin = A2; 

void setup() {
  // put your setup code here, to run once:
  pinMode(REC,OUTPUT);// set the REC pin as output
  pinMode(PLAY_L,OUTPUT);// set the PLAY_L pin as output
  pinMode(PLAY_E,OUTPUT);// set the PLAY_e pin as output
  pinMode(FT,OUTPUT);// set the FT pin as output  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  char inChar = (char)Serial.read();
  if(inChar =='r' || inChar =='R'){
              digitalWrite(REC, HIGH);
              Serial.println("Recording started");
              delay(recordTime);
              digitalWrite(REC, LOW);
              Serial.println("Recording Stopped ");              
            } 
  int x = analogRead(xPin);
  delay(1000);
  int x2 = analogRead(xPin);
  if (abs(x2-x)>20){
    Serial.print('whoa dude');
    digitalWrite(PLAY_E, HIGH);
            delay(50);
            digitalWrite(PLAY_E, LOW);  
              Serial.println("Playbak Started");  
            delay(playTime);
            
              Serial.println("Playbak Ended");
  }
  int y = analogRead(yPin);
   delay(1000);
  int y2 = analogRead(yPin);
  if (abs(y2-y)>20){
    Serial.print('whoa dude');
    digitalWrite(PLAY_E, HIGH);
            delay(50);
            digitalWrite(PLAY_E, LOW);  
              Serial.println("Playbak Started");  
            delay(playTime);
            
              Serial.println("Playbak Ended");
  }
  delay(1);
  int z = analogRead(zPin);
   delay(1000);
  int z2 = analogRead(zPin);
  if (abs(z2-z)>20){
    Serial.print('whoa dude');
    digitalWrite(PLAY_E, HIGH);
            delay(50);
            digitalWrite(PLAY_E, LOW);  
              Serial.println("Playbak Started");  
            delay(playTime);
            
              Serial.println("Playbak Ended");
  }
  delay(1);  

  Serial.print(x - 386);
  Serial.print("\t");
  
  Serial.print(y - 382);
  Serial.print("\t");
  
  Serial.print(z - 468);
  Serial.print("\n");

  delay(1000);
}
