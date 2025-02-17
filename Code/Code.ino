const int IN1 = 27;  // Broche de contrôle du sens de rotation
const int IN2 = 26;  // Broche de contrôle du sens de rotation
const int ENA = 14;  // Broche de contrôle de la vitesse

const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  ledcSetup(pwmChannel, freq, resolution);
  ledcAttachPin(ENA, pwmChannel);
}

void loop() {
  // Faire tourner le moteur pendant 10 secondes
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  ledcWrite(pwmChannel, 255);  // Vitesse maximale
  delay(10000);  // 10 secondes

  // Arrêter le moteur
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  ledcWrite(pwmChannel, 0);

  // Attendre 24 heures (86400000 millisecondes)
  delay(86400000);
}
