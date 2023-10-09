212/* 
  Hedwig's theme - Harry Potter 
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs                                            
                                              
                                              Robson Couto, 2019
*/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

// change this to make the song slower or faster
int tempo = 144;

// change this to whichever pin you want to use
int buzzer = 13;

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!

/*
int melody[] = {

  // Hedwig's theme fromn the Harry Potter Movies
  // Socre from https://musescore.com/user/3811306/scores/4906610
  
  REST, 2, NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2, 
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, -1, 
  NOTE_D4, 4,

  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, -1,
  NOTE_AS4, 4,
     
  NOTE_D5, 2, NOTE_AS4, 4,//18
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_DS5, 2, NOTE_D5, 4,
  NOTE_CS5, 2, NOTE_A4, 4,
  NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_D4, 4,
  NOTE_D5, -1, 
  REST,4, NOTE_AS4,4,  

  NOTE_D5, 2, NOTE_AS4, 4,//26
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_AS4, 4,
  NOTE_G4, -1, 
  
};
*/

int melody[] = {

B3, 2, A3, 2, 
G3, 4, A3, 4, B3, 4, B3, 4,
E3, 8, E3, 8, E3, 8, E3, 8, E3, 8, E3, 8, E3, 8, E3, 8,
E3, 4, REST, 4, D3, 4, REST, 4, 
E3, 4, D3, E3, 8, F3, 8, G3, 8, F3, 8, 
E3, 4, REST, 4, E3, 8, F3, 8, G3, 8, E3, 8,  
A3, 4, A3, 4, B3, 8, A3, 8, G3, 8, F3, 8,
E3, 4, REST, 4, D3, 4, REST, 4,
E3, 4, D3, 4, E3, 8, D3, 8, E3, 8, F3, 8,
G3, 4, G3, 4, A3, 4, G3, 4,
B3, 8, B3, 8, B3, 8, B3, 8, B3, 4, REST, 4,
G3, 8, G3, 8, G3, 8, G3, 8, A3, 8, A3, 8, A3, 8, A3, 8, 
B3, 8, B3, 8, A3, 8, A3, 8, B3, 4, REST, 4,
G3, 8, G3, 8, G3, 8, G3, 8, A3, 8, A3, 8, A3, 8, A3, 8, 
B3, 2, A3, 4, G3, 4,
F3, 2, E3, 4, D3, 4,
E3, 4, F3, 4, G3, 4, E3, 4,
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
B3, 4, B3, 4, B3, 8, A3, 8, G3, 8, A3, 8,
B3, 4, B3, 4, B3, 8, C4, 8, D4, 8, C4, 8, 
B3, 4, B3, 4, REST, 4, B3, 4,
A3, 4, A3, 4, REST, 4, A3, 4,
G3, 2, A3, 2,
B3, 4, REST, 4, REST, 2,
E3, 4, E3, 8, D3, 8, E3, 4, E3, 4, D3, 8,
E3, 8, F3, 8, G3, 8, F3, 8, E3, 4, D3, 4,
E3, 8, F3, 8, G3, 8, A3, 8, B3, 4, B3, 4,
C4, 4, A3, 4, B3, 4, REST, 4,
E3, 4, E3, 8, D3, 8, E3, 4, E3, 8, D3, 8,
E3, 8, F3, 8, G3, 8, F3, 8, E3, 4, F3, 4,
G3, 4, A3, 4, B3, 4, B3, 4,
E3, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 2, E3, 4, E3, 4,
A3, 4, REST, 4, E3, 4, REST, 4,
D3, 4, REST, 4, A3, 4, REST, 4,
F3, 4, REST, 4, B3, 4, B3, 4,
G3, 4, D3, 4, E3, 4, REST, 4,
A3, 4, REST, 4, E3, 4, REST, 4,
D3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, B3, 4, E3, 4, E3, 4, 
A3, 4, E3, 4, A3, 4, REST, 4, 
G3, 4, REST, 4, F3, 4, REST, 4,
E3, 4, REST, 4, B3, 4, E3, 4,
D3, 4, E3, 4, F3, 4, D3, 4 
G3, 4, A3, 4, E3, 4, REST, 4,
A3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, REST, 4, D3, 4, D3, 4,
A3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 4, E3, 8, D3, 8, E3, 4, REST, 4,
B3, 4, B3, 4, B3, 4, B3, 4, 
B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, 
E3, 4, REST, 4, D3, 4, REST, 4, 
E3, 4, D3, E3, 8, F3, 8, G3, 8, F3, 8, 
E3, 4, REST, 4, E3, 8, F3, 8, G3, 8, E3, 8,  
A3, 4, A3, 4, B3, 8, A3, 8, G3, 8, F3, 8,
E3, 4, REST, 4, D3, 4, REST, 4,
E3, 4, D3, 4, E3, 8, D3, 8, E3, 8, F3, 8,
G3, 4, G3, 4, A3, 4, G3, 4,
B3, 8, B3, 8, B3, 8, B3, 8, B3, 4, REST, 4,
G3, 8, G3, 8, G3, 8, G3, 8, A3, 8, A3, 8, A3, 8, A3, 8, 
B3, 8, B3, 8, A3, 8, A3, 8, B3, 4, REST, 4,
G3, 8, G3, 8, G3, 8, G3, 8, A3, 8, A3, 8, A3, 8, A3, 8, 
B3, 2, A3, 4, G3, 4,
F3, 2, E3, 4, D3, 4,
E3, 4, F3, 4, G3, 4, E3, 4,
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, F4, 8, 
B3, 4, B3, 4, B3, 8, A3, 8, G3, 8, A3, 8,
B3, 4, B3, 4, B3, 8, C4, 8, D4, 8, C4, 8, 
B3, 4, B3, 4, REST, 4, B3, 4,
A3, 4, A3, 4, REST, 4, A3, 4,
G3, 2, A3, 2,
B3, 4, REST, 4, REST, 2,
E3, 4, E3, 8, D3, 8, E3, 4, E3, 4, D3, 8,
E3, 8, F3, 8, G3, 8, F3, 8, E3, 4, D3, 4,
E3, 8, F3, 8, G3, 8, A3, 8, B3, 4, B3, 4,
C4, 4, A3, 4, B3, 4, REST, 4,
E3, 4, E3, 8, D3, 8, E3, 4, E3, 8, D3, 8,
E3, 8, F3, 8, G3, 8, F3, 8, E3, 4, F3, 4,
G3, 4, A3, 4, B3, 4, B3, 4,
E3, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 2, E3, 4, E3, 4,
A3, 4, REST, 4, E3, 4, REST, 4,
D3, 4, REST, 4, A3, 4, REST, 4,
F3, 4, REST, 4, B3, 4, B3, 4,
G3, 4, D3, 4, E3, 4, REST, 4,
A3, 4, REST, 4, E3, 4, REST, 4,
D3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, B3, 4, E3, 4, E3, 4, 
A3, 4, E3, 4, A3, 4, REST, 4, 
G3, 4, REST, 4, F3, 4, REST, 4,
E3, 4, REST, 4, B3, 4, E3, 4,
D3, 4, E3, 4, F3, 4, D3, 4 
G3, 4, A3, 4, E3, 4, REST, 4,
A3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, REST, 4, D3, 4, D3, 4,
A3, 4, REST, 4, E3, 4, E3, 4,
A3, 4, E3, 8, D3, 8, E3, 4, REST, 4,
REST, 4, E3, 8, D3, 8, E3, 4, REST, 4,
B3, 4, B3, 4, B3, 4, B3, 4, 
B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, B3, 8, 
B3, 2, A3, 2,
G3, 4, A3, 4, B3, 4, B3, 4, 
E3, 4, E3, 8, D3, 8, E3, 4, REST, 4,
E3, 4, E3, 8, D3, 8, E3, 4, REST, 4, 
E3, 4, REST, 4, B3, 4, REST, 4
B3, 8, B3, 8, E3, 4, REST, 2
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void setup() {
  // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody[thisNote], noteDuration*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

void loop() {
  // no need to repeat the melody.
}
