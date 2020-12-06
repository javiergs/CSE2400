#include <iostream>
#include "time.h"
using namespace std;

Time::Time(){ // constructor
    hour = minute = 0;
}

void Time::setTime(int h, int m){ // Set a new mil Time
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::printMilitary(){ // Print time in military format
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute; // add "0"
}

void Time::printStandard(){ // Print in standard format
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
         << ":" << (minute < 10 ? "0" : "") << minute
         << (hour < 12 ? "AM" : "PM") << endl; // endl is equal to "\n"
}

int main(){
    Time t; // new is not mandatory - instantiate object t of class Time
    cout << "The initial military time is ";
    t.printMilitary();
    cout << "\nThe initial standard time is ";
    t.printStandard();
    t.setTime(15, 27);
    cout << "\n\nMilitary time after setTime is ";
    t.printMilitary();
    cout << "\nStandard time after setTime is ";
    t.printStandard();
    return 0;
}