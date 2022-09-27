
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()> 0) {




    int a = Serial.parseInt();

    Serial.print(a);
    if (a == 1)

    {

      Serial.print("hello boss");

    }

  }


}
