# Neopixel
Consolidated a few Arduino projects around [Neopixel addressable LED strips](https://www.adafruit.com/product/1138?length=1). 

If you have a new LED strip, you can use module **discover_strip_type** to explore it or just identify its pin configuration.

Each LED has a sequential address on the strip. Neopixel strips can be cut or appended to each other, and will automatically create their own addresses. This is why it's called an Addressable LED Strip.

There are two projects:
## discover_strip_type
Use this to test pinouts if you have a new addressable strip.
## color_led_strip_bright_fast_slow_decay
An [HC-SR04 utrasonic sensor](https://www.adafruit.com/product/3942) detects when you are in range, and activates the fade-in sequence.
If nothing has been in range for 5 seconds, the fade-out sequence begins until the strip is turned off.


