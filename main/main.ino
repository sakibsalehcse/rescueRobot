void setup() {

  Serial.begin(9600);

}

void loop() {

  

  while (Serial.available() == 0) {}

  String s = Serial.readString();

  s.trim();

  if (s == "backward")
  {
    backward();
  }

  else if (s == "forward")
  {
    forward();
  }
}
