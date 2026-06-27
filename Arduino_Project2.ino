// Arduino_Project2.ino
// Project: Display a countdown from 9-0 on 7-segment display
// Board: Arduino UNO
// Author: Alidu Mohammed Muhideen
// Date: 26/06/2026

// Define pin numbers for 7-segment segments
// Note: Pin 3,4 not used in this version



void setup() {

// Initialize all segment pins as OUTPUT
// Pins 5-12 connected to segments of 7-segment display

  
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT);
 

// For common cathode 7-seg: 1 = ON

//Display Number 9
  digitalWrite(7, 1); // Turn ON segment
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(10, 1);
  digitalWrite(8, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(10, 0);
  digitalWrite(8, 0);
  delay(250);

//Display Number 8
  digitalWrite(7, 1);
  digitalWrite(5, 1);
  digitalWrite(8, 1);
  digitalWrite(6, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(5, 1);
  digitalWrite(8, 0);
  digitalWrite(6, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(250);

//Display Number 7
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(10, 0);
  delay(250);

//Display Number 6
  digitalWrite(7, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(250);

//Display Number 5
  digitalWrite(7, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  delay(250);

//Display Number 4
  digitalWrite(6, 1);
  digitalWrite(8, 1);
  digitalWrite(5, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(6, 0);
  digitalWrite(8, 0);
  digitalWrite(5, 0);
  digitalWrite(10, 0);
  delay(250);

//Display Number 3
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(5, 1);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(5, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  delay(250);

//Display Number 2
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(5, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(5, 0);
  digitalWrite(12, 0);
  digitalWrite(11, 0);
  delay(250);

//Display Number 1
  digitalWrite(8, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(8, 0);
  digitalWrite(10, 0);
  delay(250);

//Display Number 0
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(6, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(6, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(250);
 
  }

void loop() {
 
}
