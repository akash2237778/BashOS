#!/bin/bash

##yum install adb
## adb devices
## adb tcpip 5454
## adb connect IP:5454

 adb shell input keyevent 82 && adb shell input swipe 200 900 200 300 && adb shell input text 78569 && adb shell input keyevent 66

