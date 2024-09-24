// Define the buzzer pin
#define BUZZER_PIN 8

// Notes of the melody (in Hz)
#define NOTE_C 261
#define NOTE_D 294
#define NOTE_E 329
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493
#define NOTE_C_HIGH 523

// Melody of "Happy Birthday"
int melody[] = {
  NOTE_C, NOTE_C, NOTE_D, NOTE_C, NOTE_F, NOTE_E,   // Happy birthday to you
  NOTE_C, NOTE_C, NOTE_D, NOTE_C, NOTE_G, NOTE_F,   // Happy birthday to you
  NOTE_C, NOTE_C, NOTE_C_HIGH, NOTE_A, NOTE_F, NOTE_E, NOTE_D, // Happy birthday dear [Name]
  NOTE_AS, NOTE_AS, NOTE_A, NOTE_F, NOTE_G, NOTE_F // Happy birthday to you
};

// Duration of each note (in ms)
int noteDurations[] = {
  500, 500, 1000, 1000, 1000, 2000, // First line
  500, 500, 1000, 1000, 1000, 2000, // Second line
  500, 500, 1000, 1000, 1000, 500, 2000, // Third line
  500, 500, 1000, 1000, 1000, 2000 // Fourth line
};

void setup() {
  // Initialize the buzzer pin as an output
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Play the melody
  for (int thisNote = 0; thisNote < 25; thisNote++) {
    int noteDuration = noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);

    // Pause between notes
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone before playing the next note
    noTone(BUZZER_PIN);
  }

  // Delay after the song completes (e.g., 5 seconds)
  delay(5000);
}
