// define IR pins
#define ir_right A1
#define ir_left A2

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read IR sensor values
  int ir_right_value = analogRead(ir_right);
  int ir_left_value = analogRead(ir_left);

  // Print values to Serial Monitor
  Serial.print("IR Right: ");
  Serial.print(ir_right_value);
  Serial.print("\t IR Left: ");
  Serial.println(ir_left_value);

  delay(500); // Adjust delay as needed
}
