int motorconrol = 9;

void setup()
{
    pinMode(motorconrol,OUTPUT);

}

void loop()
{
    digitalWrite(motorconrol,HIGH);
    delay(5000);
    digitalWrite(motorconrol,LOW);
    delay(1000);

}