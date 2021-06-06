float freqMin = 1;
float freqMax = 4;
float frequency;

float theta = 0;
float thetaChangeRate = PI/16;
float envelope;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT) ;
}

void loop()
{
  envelope = abs(sin(theta));
  frequency = envelope * freqMax + (1-envelope)*freqMin;
  blink();
  theta += thetaChangeRate/frequency;
  if (theta >= 2*PI) theta = 0;
}

void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000/frequency);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000/frequency);
}