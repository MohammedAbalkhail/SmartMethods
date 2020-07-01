//the connection of L298N motor driver in the pins of arduino board
int enB = 5;
int in4 = 6;
int in3 = 7;
int in2 = 8;
int in1 = 9;
int enA = 10;

void setup() {
pinMode (enA, OUTPUT);
pinMode (enB, OUTPUT);
pinMode (in1, OUTPUT);
pinMode (in2, OUTPUT);
pinMode (in3, OUTPUT);
pinMode (in4, OUTPUT);
}

void loop() {
int but1= digitalRead (13);
int but2= digitalRead (1);
if (but1 == HIGH){
digitalWrite (enA, HIGH);
digitalWrite (in1, LOW);
digitalWrite (in2, HIGH);
delay(1000);
digitalWrite (in1, HIGH);
digitalWrite (in2, HIGH);
delay(500);
digitalWrite (in1, HIGH);
digitalWrite (in2, LOW);
delay(1000);
digitalWrite (in1, LOW);
digitalWrite (in2, LOW);
delay(500);
digitalWrite (enA, LOW);
}

else if (but2 == HIGH){
digitalWrite (enB, HIGH);
digitalWrite (in3, LOW);
digitalWrite (in4, HIGH);
delay(1000);
digitalWrite (in3, HIGH);
digitalWrite (in4, HIGH);
delay(500);
digitalWrite (in3, HIGH);
digitalWrite (in4, LOW);
delay(1000);
digitalWrite (in3, LOW);
digitalWrite (in4, LOW);
delay(500);
digitalWrite (enB, LOW);
}
}
