# Neopixel
Consolidated a few Arduino projects around [Neopixel addressable LED strips](https://www.adafruit.com/product/1138?length=1). 

If you have a new LED strip, you can use module **discover_strip_type** to explore it or just identify its pin configuration.

Each LED has a sequential address on the strip. Neopixel strips can be cut or appended to each other, and will automatically create their own addresses. This is why it's called an Addressable LED Strip.

There are three projects:
1. **discover_strip_type**: I use this to test pinouts when I have a new addressable strip.
1. **color_led_strip_bright_fast_slow_decay**: The one I use. The strip is inside a conduit and the sensor beside my throne.
1. **color_led_strip_auto**: Haven't run this yet, just found it there.

