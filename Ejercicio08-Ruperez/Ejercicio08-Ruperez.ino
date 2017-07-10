#define PIN_BOTON_B 3
#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7
unsigned long duration;

void setup()

{
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
  pinMode(PIN_BOTON_B, INPUT);
  Serial.begin (9600);



}


void loop()

{

  duration = pulseIn(PIN_BOTON_B, HIGH, 10000000);

  Serial.println (duration);

  int pulso_s = duration / 1000000;
  Serial.println (pulso_s);

  while (pulso_s >= 2)
  {
    for (int i = PIN_LED_1; i <= PIN_LED_4; i++)
    {
      digitalWrite (i , HIGH);
      delay (500);
      digitalWrite (i , LOW);
      delay (500);
      if (digitalRead(PIN_BOTON_B))
      {
        void loop();
      }
    }
   
  }
  
}




