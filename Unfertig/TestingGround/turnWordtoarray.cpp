void setup() {
    Serial.begin(9600);
}

void loop() {
    String stringOne = "Hello String\n";
    Serial.print(stringOne);
}