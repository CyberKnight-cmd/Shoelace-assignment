import string
import time

text = 'NVM FUCK YOU'
temp = ''
for ch in text:
    for i in string.printable:
        time.sleep(0.02)
        print(temp + i)
        if i==ch or ch == temp: 
            temp += ch
            break