//configure the relays
int rel1 = 5;
int rel2 = 10;
int Button=1;
void setup() {
//configure the pins as output
pinMode (rel1, OUTPUT);
pinMode (rel2, OUTPUT);

//the pins will be disabled
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
}

void loop() {
int PBV= digitalRead (Button); //PVB(push button value) it reads the value from pin 1"Button"
if (PBV == HIGH){ //if the button is pressed PVB will be HIGH (enabled)

digitalWrite(rel1, HIGH);
digitalWrite(rel2, LOW);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, HIGH);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
delay(500);
}
}
