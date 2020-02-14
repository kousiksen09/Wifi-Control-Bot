# Wifi-Control-Bot

Here a Wifi-controlled bot using BLYNK app has been built.

The hardware componenets are used are:

ESP8266
1 robot chasis with 4 motors, Bo-motor  
L298N motor driver
Jumper wires

The software used are:

BLYNK app:

Blynk was designed for the Internet of Things. It can control hardware remotely, it can display sensor data, it can store data, vizualize it and do many other cool things.

There are three major components in the platform:

Blynk App - allows to you create amazing interfaces for your projects using various widgets we provide.

Blynk Server - responsible for all the communications between the smartphone and hardware. You can use our Blynk Cloud or run your private Blynk server locally. It’s open-source, could easily handle thousands of devices and can even be launched on a Raspberry Pi.

Blynk Libraries - for all the popular hardware platforms - enable communication with the server and process all the incoming and outcoming commands.

Arduino IDE

Circuit Explaination:

The GPIO pins D5,D8 and D7 were connected to Enable A, IN1 and IN2 pins respectively. The other pins, ie, D6, D4 and D3 pins were connected to Enable B, IN4 and IN3 pins respectively in the same way.

BLYNK app setup:

Here 4 buttons were created:

FORWARD button - It will help in FORWARD movement of the bot. 

LEFT button - It will help in LEFTWARD movement of the bot.

BACKWARD button - It will help in BACKWARD movement of the bot.

RIGHT button - It will help in RIGHTWARD movement of the bot.  
Thus it will help synchronize the movement of the bot.



Here is the video link:
https://drive.google.com/file/d/1VIqgiqh7rwgD_QCxR4NTp1OHFuKtbgjP/view?usp=sharing
