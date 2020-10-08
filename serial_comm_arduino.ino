

void setup() {
  Serial.begin(9600);
  Serial.flush();
}

void loop() {
  if(Serial.available() && Serial.read() == '\0'){
    
    int data_first = Serial.read();
    int data_second = Serial.read();
    int data_third = Serial.read();
    int data_forth = Serial.read();
    int data_fifth = Serial.read();
    int data_sixth = Serial.read();
    
    Serial.print(data_first);
    Serial.print(" ");
    Serial.print(data_second);
    Serial.print(" ");
    Serial.print(data_third);
    Serial.print(" ");
    Serial.print(data_forth);
    Serial.print(" ");
    Serial.print(data_fifth);
    Serial.print(" ");
    Serial.println(data_sixth);

    delay(100);
  }
}
