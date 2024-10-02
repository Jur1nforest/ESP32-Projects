#define motor1A 13
#define motor2A 14

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);  
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate

}

// the loop function runs over and over again forever
void loop() {
  
  // Rotate
  digitalWrite(motor1A, HIGH);     
  digitalWrite(motor2A, LOW);   
  Serial.println("rotate");
  delay(2000); 

  // Rotate in the opposite direction
  digitalWrite(motor1A, LOW);     
  digitalWrite(motor2A, HIGH);    
  delay(2000); 

  // Stop
  digitalWrite(motor1A, LOW);     
  digitalWrite(motor2A, LOW);    
  delay(3000);
}

