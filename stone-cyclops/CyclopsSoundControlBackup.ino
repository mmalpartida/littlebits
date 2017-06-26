char mychar;


 const int o1 = 1;
  const int o2 = 5;
  const int o3 = 9;   

// the setup routine runs once when you press reset:
void setup() {

  //pinMode(10, OUTPUT);

  pinMode(o1, OUTPUT);
  pinMode(o2, OUTPUT);
  pinMode(o3, OUTPUT);
  // initialize serial communication at 9600 bits per second:

  digitalWrite(o1, LOW);
  digitalWrite(o2, LOW);
  digitalWrite(o3, LOW);
  Serial.begin(9600);

 
}


void loop() {
  // read the input on analog pin 0:
  int i1 = digitalRead(0);
  int i2 = analogRead(A0);
  int i3 = analogRead(A1);

  String spacer = " ";

  String group = i1 + spacer + i2 + spacer + i3;

  if(i1 == 1){
    digitalWrite(o1, HIGH);
    Serial.println("Intro");
    delay(4000);
    digitalWrite(o1, LOW); 
  }else if(i1 == 0 && i2 >170 && i2 < 200){
  digitalWrite(o2, HIGH);
  Serial.println("Correct");
    delay(4000); 
     digitalWrite(o2, LOW);

    
  }else if(i1 == 0 && i3 >290 && i3 < 310){
  digitalWrite(o3, HIGH);
  Serial.println("wrong");
    delay(4000); 
    digitalWrite(o3, LOW);
    
  }

 
  

  //o2 350-400 activgtae
  //o1 digital so need to compare
  //o3  >600
  
  Serial.println(group);
  //digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);              // wait for a second
  //digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  //tmrpcm.play("nodear.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
  delay(500);       
}
