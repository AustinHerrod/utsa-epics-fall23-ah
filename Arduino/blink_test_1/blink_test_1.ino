int led_pin1 = 12;
int led_pin2 = 13;
int blink_duration1 = 100;
int blink_duration2 = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(led_pin1, OUTPUT);
pinMode(led_pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (led_pin1,HIGH);
delay (blink_duration1);
digitalWrite (led_pin1,LOW);
delay (blink_duration1);

digitalWrite (led_pin2,HIGH);
delay (blink_duration2);
digitalWrite (led_pin2,LOW);
delay (blink_duration2);

}
