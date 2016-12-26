#define BUZZER_PIN1    12
#define BUZZER_PIN2    13

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN1, OUTPUT);
  pinMode(BUZZER_PIN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sound_f(1000, 2000);
  delay(50);
  sound_f(2000, 500);
  delay(50);
}

void sound_f(int frequency1, int frequency2) 
{
     tone(BUZZER_PIN1, frequency1, 20);
     tone(BUZZER_PIN2, frequency2, 20);
}
