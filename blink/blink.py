# Paso 1
from machine import Pin
# Paso 2
import time
# Paso 3
led_1 = Pin(5, Pin.OUT)
while True:
    # Paso 4
    led_1.value(1)
    time.sleep(0.5)
    led_1.value(0)
    time.sleep(0.5)
