#!/bin/bash

echo Building for derek_LED2.cpp and myBlink.cpp
g++ -Wall derek_LED.cpp myBlink.cpp -o myBlink
echo "Done. The name of the execution file is myBlink"

