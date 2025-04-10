# TASK-2
Aim: To control a Two-Wheel Drive Mechanism using W-A-S-D keys.

# Thought Process
(context: At the initial stages I had no idea that I will be given a motor driver. I assumed that the movement of the wheel drive depended soleley on the code I was going to and its logic). 
1. Using the keyboard keys:
   - At the very beginning i had very little knowledge on how to use the keyboard keys and to get input from them.
   - I looked up the arduino documentation online and came across keyboard.h library.
   - The Arduino IDE that I had installed in my PC kept throwing errors saying there was no such library.
   - Eventually I settles upon Serial.read() which made things easier. 
3. Contolling the forward motion:
   -This is was the easiest part of the code. One direction or rotation of the motor caused forward and the other caused backwards motion. 
4. Contolling the backward motion:
   -I spent the majority of my time trying to come u with a logic that would reverse the direction of current (to reverse the rotation of the motor).
   - I however found the logic in this document: https://forum.arduino.cc/t/what-can-i-do-to-change-the-turning-direction-of-a-dc-motor-automatically/260272
5. Turning right/left:
   - Forward rotation of motor 1 while motor 2 was stopped for the time being: Right. 
   - Forward rotation of motor 2 while motor 1 was stopped for the time being: Left.
6. Motor Driver:
   - Somehow, even with the wrong logic, I was able to show forward motion of the wheel drive. The other cases, for obvious reasons, did not work as expected.
   - I had the opportunity to learn how to use a motor driver today. Motor driver used: L298N
   - When I was given the motor driver, I had no knowledge about its pinouts. After a lot of trial and error and a lot of input from my seniors, I understood how to use the L298N motor driver and developed a logic.
   - Right before the final physical trial, I connected the wrong pins of the power source and the motor driver stopped functioning.

The code attached in this repose is an improved code that (hopefully) should work for all the cases. 
Thank You. 
