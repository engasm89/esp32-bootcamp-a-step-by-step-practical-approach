// Simulate bootcamp steps: blink, button, sensor frames
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Entry
  printf("ESP32 Bootcamp: A Step By Step Practical Approach\n"); // Title
  for (int i = 0; i < 6; ++i) { // Steps
    int led = (i % 2); // Blink
    int btn = (i % 3 == 0); // Button
    int temp = 25 + i; // Sensor
    printf("STEP=%d LED=%d BTN=%d TEMP=%d\n", i, led, btn, temp); // Log
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End main
