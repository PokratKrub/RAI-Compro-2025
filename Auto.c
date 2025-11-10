#define ULTRASONIC_TRIG_PIN  4  
#define ULTRASONIC_ECHO_PIN  5   
#define LEFT_ENABLE_PIN      3   
#define LEFT_FORWARD_PIN     8   
#define LEFT_BACKWARD_PIN    9   
#define RIGHT_FORWARD_PIN   10   
#define RIGHT_BACKWARD_PIN  11
#define RIGHT_ENABLE_PIN     6   
struct MotorDriver {
  int leftEnable;
  int leftForward;
  int leftBackward;
  int rightForward;
  int rightBackward;
  int rightEnable;
};
MotorDriver motors = {
  LEFT_ENABLE_PIN,
  LEFT_FORWARD_PIN,
  LEFT_BACKWARD_PIN,
  RIGHT_FORWARD_PIN,
  RIGHT_BACKWARD_PIN,
  RIGHT_ENABLE_PIN
};
MotorDriver *robot = &motors; 
long getDistance();
void moveForward(MotorDriver *m);
void moveBackward(MotorDriver *m);
void turnRight(MotorDriver *m);
void stopMotor(MotorDriver *m);
void setup() {
  pinMode(ULTRASONIC_TRIG_PIN, OUTPUT);
  pinMode(ULTRASONIC_ECHO_PIN, INPUT);
  pinMode((*robot).leftEnable, OUTPUT);
  pinMode((*robot).rightEnable, OUTPUT);
  pinMode((*robot).leftForward, OUTPUT);
  pinMode((*robot).leftBackward, OUTPUT);
  pinMode((*robot).rightForward, OUTPUT);
  pinMode((*robot).rightBackward, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int safeDistanceList[3] = {15, 20, 25};
  for (int i = 0; i < 3; i++) {
    long distance = getDistance();
    Serial.print("Measured Distance: ");
    Serial.println(distance);
    if (distance > safeDistanceList[i]) {
      moveForward(robot);
    } else {
      stopMotor(robot);
      delay(200);
      moveBackward(robot);
      delay(300);
      turnRight(robot);
      delay(400);
      stopMotor(robot);
      delay(200);
    }
  }
}
long getDistance() {
  digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(ULTRASONIC_TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
  long duration = pulseIn(ULTRASONIC_ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;
  return distance; // in cm
}
void moveForward(MotorDriver *m) {
  analogWrite((*m).leftEnable, 200);
  analogWrite((*m).rightEnable, 200);
  digitalWrite((*m).leftForward, HIGH);
  digitalWrite((*m).leftBackward, LOW);
  digitalWrite((*m).rightForward, HIGH);
  digitalWrite((*m).rightBackward, LOW);
}
void moveBackward(MotorDriver *m) {
  analogWrite((*m).leftEnable, 200);
  analogWrite((*m).rightEnable, 200);
  digitalWrite((*m).leftForward, LOW);
  digitalWrite((*m).leftBackward, HIGH);
  digitalWrite((*m).rightForward, LOW);
  digitalWrite((*m).rightBackward, HIGH);
}
void turnRight(MotorDriver *m) {
  analogWrite((*m).leftEnable, 180);
  analogWrite((*m).rightEnable, 180);
  digitalWrite((*m).leftForward, HIGH);
  digitalWrite((*m).leftBackward, LOW);
  digitalWrite((*m).rightForward, LOW);
  digitalWrite((*m).rightBackward, HIGH);
}
void stopMotor(MotorDriver *m) {
  digitalWrite((*m).leftForward, LOW);
  digitalWrite((*m).leftBackward, LOW);
  digitalWrite((*m).rightForward, LOW);
  digitalWrite((*m).rightBackward, LOW);
}