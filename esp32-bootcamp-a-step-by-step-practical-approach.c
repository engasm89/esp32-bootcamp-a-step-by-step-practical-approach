/*
 * Course: Esp32 Bootcamp A Step By Step Practical Approach
 * Platform: ESP32
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Esp32 Bootcamp A Step By Step Practical Approach" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (ESP32)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/esp32-bootcamp-a-step-by-step-practical-approach/
 * Repository: https://github.com/engasm89/esp32-bootcamp-a-step-by-step-practical-approach
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Simulate bootcamp steps: blink, button, sensor frames
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Program entry point
  printf("ESP32 Bootcamp: A Step By Step Practical Approach\n"); // Title
  for (int i = 0; i < 6; ++i) { // Steps
    int led = (i % 2); // Blink
    int btn = (i % 3 == 0); // Button
    int temp = 25 + i; // Sensor
    printf("STEP=%d LED=%d BTN=%d TEMP=%d\n", i, led, btn, temp); // Log
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End of main function
