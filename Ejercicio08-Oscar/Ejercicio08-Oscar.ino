#define PIN_BOTON_B 3
#define PIN_BOTON_A 2
#define PIN_LED_1 4
#define PIN_LED_2 5
#define PIN_LED_3 6
#define PIN_LED_4 7

unsigned long duration;

void setup() {

  Serial.begin(9600);
  pinMode(PIN_BOTON_B, INPUT);
  pinMode(PIN_BOTON_B, INPUT);
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);

}

void loop() {

  duration = pulseIn(PIN_BOTON_B, HIGH,10000000);
  Serial.println (duration);
  if (duration > 2000000);
  { digitalWrite(PIN_LED_1, HIGH);
    digitalWrite(PIN_LED_2, HIGH);
    digitalWrite(PIN_LED_3, HIGH);
    digitalWrite(PIN_LED_4, HIGH);
  }
    duration = pulseIn(PIN_BOTON_A, HIGH,10000000);
  Serial.println (duration);
  if (duration > 2000000);
  { digitalWrite(PIN_LED_1, LOW);
    digitalWrite(PIN_LED_2, LOW);
    digitalWrite(PIN_LED_3, LOW);
    digitalWrite(PIN_LED_4, LOW);
  }
}
