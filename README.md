gpspower
========

Arduino power control for my GPS tracker.

I bought http://dx.com/p/portable-mini-gsm-gprs-gps-tracker-for-personal-remote-positioning-33331 for use in my remote control airplane, in case something
goes wrong.

I removed the case and the battery to save weight. Instead I hooked it up to
the big flight battery. But since the GPS tracker is designed for battery use,
it doesn't start at power-on. Instead you have to hold a button for 2-3
seconds for it to start.

Therefore I have added a little Arduino Pro board to it, with the only job of
"pressing" the on/off button for 3 seconds at power-on, and then put the
arduino in deep sleep mode to avoid wasting power.

Pin 13 is the onboard LED, used only for visual feedback.
Pin 2 is digital output pin 2, connected to the on/off button on the GPS.

