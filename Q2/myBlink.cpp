// Name: myBlink.cpp
// This is the driver for the derek_LED2.h file
// To run: ./myBlink command (# of seconds)

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "derek_LED.h"
using namespace std;

int main(int argc, char* argv[])
{
if(argc!=3)
{
       	cout << "Usage is makeLEDs <command>" << endl;
	cout << "   command is one of: on, off, flash,status, blink n" << endl;
	cout << " e.g. makeLEDs flash" << endl;
	return 2;
}
	cout << "Starting the makeLEDs program" << endl;
	string cmd(argv[1]);
	string num(argv[2]);
	int n = stoi(num);
	LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };// LED(0): constructor and assigned 0 
	
	for(int i=0; i<=3; i++)
	{
		if(cmd=="on")leds[i].turnOn();
	 	else if(cmd=="off")leds[i].turnOff();
		else if(cmd=="flash")leds[i].flash("100"); //default is "50"
		else if(cmd=="status")leds[i].outputState();
		else if(cmd=="blink")leds[i].blink(n);
		else{ cout << "Invalid command!" << endl; }
	}
	cout << "Finished the makeLEDs program" << endl;
	return 0;
}
