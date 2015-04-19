int IRledPin =  13;    // LED connected to digital pin 13

byte byteRead;

const byte VOLUME_UP = 'f';
const byte VOLUME_DOWN  = 's';
const byte CHANNEL_UP  = 'e';
const byte CHANNEL_DOWN = 'd';
const byte OK_BTN = 'p';
const byte INFO_BTN = 'o';
const byte LAST_BTN = 'i';
const byte EXIT_BTN = 'u';

// The setup() method runs once, when the sketch starts
void setup()   {                
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);      
  Serial.begin(9600);
}

void loop()                     
{
  
  /*  check if data has been sent from the computer: */
  if (Serial.available()) {
    /* read the most recent byte */
    byteRead = Serial.read();
    

    switch (byteRead) {
      case VOLUME_UP:
        // statements
        //Serial.println("Volume up");
        SendVolumeUp();
        break;
      case VOLUME_DOWN:
        // statements
        //Serial.println("Volume down");
        SendVolumeDown();
        break;
      case CHANNEL_UP:
        //Serial.println("Channel up");
        SendChannelUp();
        // statements
        break;
      case CHANNEL_DOWN:
        //Serial.println("Channel down");      
        SendChannelDown();
        // statements
        break;
      case OK_BTN:
        //Serial.println("Channel down");      
        SendOK();
        // statements
        break;
      case INFO_BTN:
        //Serial.println("Channel down");      
        SendInfo();
        // statements
        break;       
       // const byte LAST_BTN = 'i';
       // const byte EXIT_BTN = 'u'; 
      case LAST_BTN:
        SendLast();
        break;         
      case EXIT_BTN:
        SendExit();
        break;    
      case '1':
        Send1();
        break;
      case '2':
        Send2();
        break;        
      case '3':
        Send3();
        break;        
      case '4':
        Send4();
        break;                
      case '5':
        Send5();
        break;                        
      case '6':
        Send6();
        break;        
      case '7':
        Send7();
        break;                        
      case '8':
        Send8();
        break;        
      case '9':
        Send9();
        break;
      case '0':
        Send0();
        break;
    }
  }
}

void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli();  // this turns off any background interrupts

  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
    digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
    delayMicroseconds(10);         
    digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
    delayMicroseconds(10);        

    // so 26 microseconds altogether
    microsecs -= 26;
  }

  sei();  // this turns interrupts back on
}

void SendVolumeDown() {
  delayMicroseconds(31352); 
  pulseIR(8880);
  delayMicroseconds(4380); 
  pulseIR(600);
  delayMicroseconds(520); 
  pulseIR(580);
  delayMicroseconds(560); 
  pulseIR(520);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(520);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(600);
  delayMicroseconds(1600); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(600);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1600); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(540);
  delayMicroseconds(1620); 
  pulseIR(600);
  delayMicroseconds(520); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(520); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(600);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(39220); 
  pulseIR(8900);
  delayMicroseconds(2160); 
  pulseIR(600);
}

void SendVolumeUp() {
  delayMicroseconds(29312); 
  pulseIR(8900);
  delayMicroseconds(4360); 
  pulseIR(580);
  delayMicroseconds(560); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(1600); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(520);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(1600); 
  pulseIR(600);
  delayMicroseconds(520); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(39240); 
  pulseIR(8920);
  delayMicroseconds(2140); 
  pulseIR(580);
}


void SendChannelUp() {
  delayMicroseconds(50508); 
  pulseIR(8920);
  delayMicroseconds(4380); 
  pulseIR(600);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(520); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1600); 
  pulseIR(620);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(520); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(600);
  delayMicroseconds(500); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(520); 
  pulseIR(600);
  delayMicroseconds(1600); 
  pulseIR(600);
  delayMicroseconds(39220); 
  pulseIR(8880);
  delayMicroseconds(2180); 
  pulseIR(560);
}

void SendChannelDown() {
  delayMicroseconds(41876); 
  pulseIR(8940);
  delayMicroseconds(4320); 
  pulseIR(560);
  delayMicroseconds(580); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(520); 
  pulseIR(540);
  delayMicroseconds(580); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(540);
  delayMicroseconds(560); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(600);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(580); 
  pulseIR(540);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(560); 
  pulseIR(540);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(560); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(540);
  delayMicroseconds(1640); 
  pulseIR(580);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(540); 
  pulseIR(580);
  delayMicroseconds(1620); 
  pulseIR(560);
  delayMicroseconds(1640); 
  pulseIR(560);
  delayMicroseconds(580); 
  pulseIR(540);
  delayMicroseconds(1620); 
  pulseIR(580);
  delayMicroseconds(39240); 
  pulseIR(8920);
  delayMicroseconds(2140); 
  pulseIR(560);
}

void SendInfo() {
  delayMicroseconds(62392); pulseIR(8860);
  delayMicroseconds(4420); pulseIR(580);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(560); pulseIR(560);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(1600); pulseIR(580);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(1640); pulseIR(600);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(1640); pulseIR(580);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(1640); pulseIR(580);
  delayMicroseconds(560); pulseIR(540);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(1640); pulseIR(580);
  delayMicroseconds(39220); pulseIR(8860);
  delayMicroseconds(2200); pulseIR(560);
}

void SendOK() {
  delayMicroseconds(48220); pulseIR(8860);
  delayMicroseconds(4400); pulseIR(560);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(520); pulseIR(560);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(520); pulseIR(580);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(1640); pulseIR(580);
  delayMicroseconds(1600); pulseIR(600);
  delayMicroseconds(1620); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(560); pulseIR(540);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(540); pulseIR(540);
  delayMicroseconds(540); pulseIR(580);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(540); pulseIR(560);
  delayMicroseconds(1620); pulseIR(600);
  delayMicroseconds(1600); pulseIR(580);
  delayMicroseconds(1640); pulseIR(560);
  delayMicroseconds(39240); pulseIR(8860);
  delayMicroseconds(2180); pulseIR(600);
}

void Send1() {
  delayMicroseconds(11508); pulseIR(8920);

delayMicroseconds(4340); pulseIR(620);

delayMicroseconds(480); pulseIR(620);

delayMicroseconds(500); pulseIR(580);

delayMicroseconds(500); pulseIR(620);

delayMicroseconds(480); pulseIR(620);

delayMicroseconds(500); pulseIR(580);

delayMicroseconds(500); pulseIR(620);

delayMicroseconds(480); pulseIR(620);

delayMicroseconds(500); pulseIR(580);

delayMicroseconds(1600); pulseIR(620);

delayMicroseconds(1580); pulseIR(640);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1600); pulseIR(620);

delayMicroseconds(1580); pulseIR(620);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1600); pulseIR(620);

delayMicroseconds(1580); pulseIR(620);
delayMicroseconds(1600); pulseIR(600);
delayMicroseconds(480); pulseIR(620);
delayMicroseconds(500); pulseIR(620);
delayMicroseconds(480); pulseIR(600);
delayMicroseconds(480); pulseIR(640);
delayMicroseconds(480); pulseIR(620);
delayMicroseconds(480); pulseIR(600);
delayMicroseconds(480); pulseIR(640);
delayMicroseconds(480); pulseIR(600);
delayMicroseconds(1600); pulseIR(620);
delayMicroseconds(1600); pulseIR(600);
delayMicroseconds(1600); pulseIR(620);
delayMicroseconds(1560); pulseIR(640);
delayMicroseconds(1600); pulseIR(580);
delayMicroseconds(1620); pulseIR(600);
delayMicroseconds(1580); pulseIR(620);
delayMicroseconds(39180); pulseIR(8900);
delayMicroseconds(2160); pulseIR(620);
}

void Send2() {
  delayMicroseconds(22120); pulseIR(8900);

delayMicroseconds(4380); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(620);

delayMicroseconds(1580); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(1580); pulseIR(580);

delayMicroseconds(540); pulseIR(600);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(39220); pulseIR(8880);

delayMicroseconds(2180); pulseIR(620);

}

void Send3() {
  delayMicroseconds(30628); pulseIR(8860);

delayMicroseconds(4400); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(39240); pulseIR(8840);

delayMicroseconds(2180); pulseIR(600);

}

void Send4() {
  delayMicroseconds(124); pulseIR(8880);

delayMicroseconds(4380); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(1640); pulseIR(600);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(500); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(39200); pulseIR(8880);

delayMicroseconds(2180); pulseIR(620);

}

void Send5() {
  delayMicroseconds(18100); pulseIR(8920);

delayMicroseconds(4340); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(620);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1620); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(620);

delayMicroseconds(480); pulseIR(580);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(1620); pulseIR(620);

delayMicroseconds(1580); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(640);

delayMicroseconds(1560); pulseIR(600);

delayMicroseconds(39200); pulseIR(8920);

delayMicroseconds(2140); pulseIR(620);
}

void Send6() {
  delayMicroseconds(32740); pulseIR(8900);

delayMicroseconds(4380); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(500); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(39200); pulseIR(8880);

delayMicroseconds(2180); pulseIR(580);
}

void Send7() {
  delayMicroseconds(27556); pulseIR(8880);

delayMicroseconds(4380); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1620); pulseIR(560);

delayMicroseconds(1640); pulseIR(600);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(39220); pulseIR(8880);

delayMicroseconds(2180); pulseIR(600);

}


void Send8() {
 delayMicroseconds(49776); pulseIR(8860);

delayMicroseconds(4400); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(39240); pulseIR(8860);

delayMicroseconds(2180); pulseIR(580);

}


void Send9() {
  delayMicroseconds(23596); pulseIR(8900);

delayMicroseconds(4360); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(500); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(39200); pulseIR(8900);

delayMicroseconds(2160); pulseIR(580);
}

void Send0() {
  delayMicroseconds(5944); pulseIR(8860);

delayMicroseconds(4400); pulseIR(580);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(520); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(560); pulseIR(560);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(1600); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(39240); pulseIR(8860);

delayMicroseconds(2180); pulseIR(580);
}


void SendExit() {
  delayMicroseconds(63808); pulseIR(8880);

delayMicroseconds(4380); pulseIR(600);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(540);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(540);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(500); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(600);

delayMicroseconds(480); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(1620); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(39220); pulseIR(8880);

delayMicroseconds(2180); pulseIR(580);

}

void SendLast() {
  delayMicroseconds(50288); pulseIR(8860);

delayMicroseconds(4400); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(520); pulseIR(600);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(500); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(1620); pulseIR(600);

delayMicroseconds(1600); pulseIR(600);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(540); pulseIR(580);

delayMicroseconds(540); pulseIR(560);

delayMicroseconds(540); pulseIR(540);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(520); pulseIR(560);

delayMicroseconds(1640); pulseIR(580);

delayMicroseconds(1620); pulseIR(580);

delayMicroseconds(1640); pulseIR(560);

delayMicroseconds(39240); pulseIR(8880);

delayMicroseconds(2160); pulseIR(580);
}
