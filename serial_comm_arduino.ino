

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  int read_first = Serial.read();
  Serial.print(read_first);
  Serial.print(" ");
  int read_second = Serial.read();
  Serial.println(read_second);
}
