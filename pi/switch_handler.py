from gpiozero import LED, Button
from signal import pause

redLED = LED(26)
switch = Button(2)

redLED.blink()

pause()
