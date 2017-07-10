int pin = 3;
int timeout = 2000000;
unsigned long duration;

void setup()

{
  pinMode(pin, INPUT);
}

void loop()

{
  duration = pulseIn(pin, HIGH, timeout);
}

