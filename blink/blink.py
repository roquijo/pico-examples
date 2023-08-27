from machine import Pin
from time import sleep

led = Pin(5, Pin.OUT)

while True:
    led.toogle()
    sleep(0.5)
