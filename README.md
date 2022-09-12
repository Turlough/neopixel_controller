# Neopixel
Consolidated a few Arduino projects around Neopixel addressable LED strips. 

If you have a new LED strip, you can use module *discover_strip_type* to explore it or just identify its pin configuration.

Each LED has a sequential address on the strip. Neopixel strips can be cut or appended to each other, and will automatically create their own addresses. This is why it's called an ~Addressable LED Strip~.

There are three projects:
1. disover_strip_type. I use this to test which pins are connected to which colours when I havce a new addressable strip
1. color_led_strip_bright_fast_slow_decay. The one I use. The stip is inside a conduit and the sensor beside my throne.
1. color_led_strip_auto. Haven't run this yet, just found it there.

The bright_fast one works nicely inside a plastic conduit nearby, with the sensor to the right of my throne. Im happy with the ramp-up and ramp-down speeds.

Next step is to swap the ultrasonic rangefinder for a PIR sensor. Why? I think it will be more responsive, remaining on unless you are abosolutely immobile, because of sleep or whatever. Currently I have to move a hand close to the sensor. All it needs to know is that Im still moving.

So, that's the plan. Also put it outside solar powered.

TIP: if you buy cheap solar garden lights and they stop working, hold onto the panels and make your own ones.




