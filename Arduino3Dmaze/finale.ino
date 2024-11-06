// Define the pin numbers for the buttons
const int buttonUpPin = 10;    // Button for 'Up'
const int buttonCCPin = 3;  // Button for 'turn counterclockwise'
const int buttonCPin = 2;  // Button for 'turn clockwise'
const int buttonLeftPin = 9;  // Button for 'Left'
const int buttonRightPin = 11; // Button for 'Right'


void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
  // Initialize buzzer
  // Set button pins as inputs
  pinMode(buttonUpPin, INPUT_PULLUP);
  pinMode(buttonCCPin, INPUT_PULLUP);
  pinMode(buttonCPin, INPUT_PULLUP);
  pinMode(buttonLeftPin, INPUT_PULLUP);
  pinMode(buttonRightPin, INPUT_PULLUP);
}


void loop() {
  // Read the state of each button
  int upState = digitalRead(buttonUpPin);
  int CCState = digitalRead(buttonCCPin);
  int CState = digitalRead(buttonCPin);
  int leftState = digitalRead(buttonLeftPin);
  int rightState = digitalRead(buttonRightPin);
  delay(500);
  // Determine which button is pressed and print corresponding direction
  if (upState == LOW) {
    Serial.println("up");
  } 
  else if (CCState == LOW) {
    Serial.println("cc");
  }
  else if (CState == LOW) {
    Serial.println("c");
  }
  else if (leftState == LOW) {
    Serial.println("left");
  }
  else if (rightState == LOW) {
    Serial.println("right");
  }
  else{
    delay(50);
    Serial.println("");
  }
}


