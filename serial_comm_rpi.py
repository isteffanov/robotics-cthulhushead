import serial
import random
import struct
import time

ser = serial.Serial('/dev/ttyACM0', 9600, timeout = 1)
time.sleep(5)
ser.flush()


for num in range(255):
        ser.write('\0')
        ser.write(struct.pack('!B', num))
        ser.write(struct.pack('!B', num))
        ser.write(struct.pack('!B', num))
        ser.write(struct.pack('!B', num))
        ser.write(struct.pack('!B', num))
        ser.write(struct.pack('!B', num))
        time.sleep(0.1)

        
        


