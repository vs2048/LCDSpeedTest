# LCDSpeedTest
A quick tool to test the refresh rate of a 16x2 LCD attached to an Arduino.

Attach the LCD on pins 7,6,5,4,3,2. This will write the LCD every second and print the time it took to execute clear() and print() on the last time step. Use this to set the delay() on your main loop in more complex projects.
