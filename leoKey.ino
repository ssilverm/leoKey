/*

Forked and Remixed by Shea Silverman
9 August 2015 for World's Largest Arcade Machine
Presented by Factur and FamiLAB
@ Maker Faire Orlando!


 created 15 Mar 2012
 modified 27 Mar 2012
 by Tom Igoe
 
 this code is in the public domain
 
 */

// set pin numbers for the five buttons:
const int p1_upButton = 0;     
const int p1_downButton = 1;        
const int p1_leftButton = 2;
const int p1_rightButton = 3;
const int p1_1Button = 4;
const int p1_2Button = 5;
const int p1_startButton = 6;

const int p2_upButton = 7;     
const int p2_downButton = 8;        
const int p2_leftButton = 9;
const int p2_rightButton = 10;
const int p2_1Button = 11;
const int p2_2Button = 12;
const int p2_startButton = 13;

const int coinUp = 14;
const int resetGame = 15;

void setup() { // initialize the buttons' inputs:
  pinMode(p1_upButton, INPUT);       
  pinMode(p1_downButton, INPUT);       
  pinMode(p1_leftButton, INPUT);       
  pinMode(p1_rightButton, INPUT);       
  pinMode(p1_1Button, INPUT);
  pinMode(p1_2Button, INPUT);
  pinMode(p1_startButton, INPUT);

  pinMode(p2_upButton, INPUT);       
  pinMode(p2_downButton, INPUT);       
  pinMode(p2_leftButton, INPUT);       
  pinMode(p2_rightButton, INPUT);       
  pinMode(p2_1Button, INPUT);
  pinMode(p2_2Button, INPUT);
  pinMode(p2_startButton, INPUT);

  pinMode(coinUp, INPUT);
  pinMode(resetGame, INPUT);
  
  
  Serial.begin(9600);
  // initialize mouse control:
  //Mouse.begin();
  Keyboard.begin();
}

void loop() {
  // use serial input to control the mouse:
  if (Serial.available() > 0) {
    char inChar = Serial.read();

//    switch (inChar) {   
//    case 'u':
//      // move mouse up
//      Mouse.move(0, -40);
//      break; 
//    case 'd':
//      // move mouse down
//      Mouse.move(0, 40);
//      break;
//    case 'l':
//      // move mouse left
//      Mouse.move(-40, 0);
//      break;
//    case 'r':
//      // move mouse right
//      Mouse.move(40, 0);
//      break;
//    case 'm':
//      // perform mouse left click
//      Mouse.click(MOUSE_LEFT);
//      break;
//    }
//  }

    // use the pushbuttons to control the keyboard:
    if (digitalRead(p1_upButton) == HIGH) {
      Keyboard.write(KEY_UP_ARROW); 
    }
    if (digitalRead(p1_downButton) == HIGH) {
      Keyboard.write(KEY_DOWN_ARROW); 
    }
    if (digitalRead(p1_leftButton) == HIGH) {
      Keyboard.write(KEY_LEFT_ARROW); 
    }
    if (digitalRead(p1_rightButton) == HIGH) {
      Keyboard.write(KEY_RIGHT_ARROW); 
    }
    if (digitalRead(p1_1Button) == HIGH) {
      Keyboard.write(KEY_LEFT_CTRL); 
    }
    if (digitalRead(p1_2Button) == HIGH) {
      Keyboard.write(KEY_LEFT_ALT); 
    }
    if (digitalRead(p1_startButton) == HIGH) {
      Keyboard.write('1'); 
    }
    
    //player 2
    if (digitalRead(p2_upButton) == HIGH) {
      Keyboard.write('r'); 
    }
    if (digitalRead(p2_downButton) == HIGH) {
      Keyboard.write('f'); 
    }
    if (digitalRead(p2_leftButton) == HIGH) {
      Keyboard.write('d'); 
    }
    if (digitalRead(p2_rightButton) == HIGH) {
      Keyboard.write('g'); 
    }
    if (digitalRead(p2_1Button) == HIGH) {
      Keyboard.write('a'); 
    }
    if (digitalRead(p2_2Button) == HIGH) {
      Keyboard.write('s'); 
    }
    if (digitalRead(p2_startButton) == HIGH) {
      Keyboard.write('2'); 
    }
  
    if (digitalRead(coinUp) == HIGH) {
      Keyboard.write('5'); 
    }
    
    if (digitalRead(resetGame) == HIGH) {
      Keyboard.write(KEY_F3); 
    }
  
  }
}
