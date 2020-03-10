const int xPin = A0;
const int yPin = A1;
const int zPin = A2; 

const int REC = 2
const int PLAY_E = 3 
const int PLAY_L = 4 


const int FT = 5 
const int playTime = 5000 
const int recordTime = 3000 
const int playLTime = 900 
void setup() {
  // put your setup code here, to run once:
  pinMode(REC,OUTPUT);// set the REC pin as output
  pinMode(PLAY_L,OUTPUT);// set the PLAY_L pin as output
  pinMode(PLAY_E,OUTPUT);// set the PLAY_e pin as output
  pinMode(FT,OUTPUT);// set the FT pin as output  
  Serial.begin(9600);// set up Serial monitor  
}

void loop() {
  // put your main code here, to run repeatedly:
   int x = analogRead(xPin);
  delay(50);
  int y = analogRead(yPin);
  delay(50);
  int z = analogRead(zPin);
  delay(50);
  if(shouldActivateAlarm(x,y,z){
    activateAlarm();
  }
}

boolean shouldActivateAlarm(int xDir, int yDir, int zDir){
  
}
void activateAlarm(){
  
}
