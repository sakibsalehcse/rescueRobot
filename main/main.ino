void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
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

  else if (s == "right")
  {
    right();
  }

  else if (s == "left")
  {
    left();
  }
  else if (s == "stop")
  {
    stop();
  }
}
