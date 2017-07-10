
#define PIN_BOTON_B 3
#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

boolean encendido = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_BOTON_B, INPUT);
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long ancho_pulso = pulseIn(PIN_BOTON_B, HIGH);
  if (ancho_pulso >= 2000){
    if (encendido){
      Serial.println("Apaga");
      encendido = false;
      apaga();
    }else{
      Serial.println("Enciende");
      encendido = true;
      enciende();
    }
  }
  Serial.println(ancho_pulso);
}

void apaga(){
  for (int i =PIN_LED_1;PIN_LED_4;i++){
    digitalWrite(i,LOW);
  }
}

void enciende(){
  static int pin = PIN_LED_1;
  digitalWrite(pin,HIGH);
}

