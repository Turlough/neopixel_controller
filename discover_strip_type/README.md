# Discover Strip type
Addressable strips from various supplies have different pin configurations.
if you have a new strip from some other supplier, this program helps you identify which hardware endpoints control which colours, and how the addressing scheme works.

This module: Hook it up to your LED strip and run it. Make sure that you have a console open that reports back to you.

This program runs through a few known pin configurations for addressable LED strips.

It outputs to console the configuration that it is using, and which colours that configuration believes it is showing.
So, watch the terminal until the expected colour matches that that the strip is showing, for each of three colours. 
All three colours must match. 

And now you know the correct pinout for that LED strip. Use it in the rest of your code.

