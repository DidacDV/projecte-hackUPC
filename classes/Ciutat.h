#ifndef CIUTAT_H
#define CIUTAT_H

#include <iostream>
#include <stdio.h>
#include<string>
using namespace std;

class Ciutat {
    private:
    float Longitude;
    float Latitude;
    string name;

    public:
    Ciutat(string name); // Constructora

    string getName() const; //Return name;

    float getLatitude() const;

    float getLongitude() const;

    void addLongitude(float f); //Add Longitude

    void addLatitude(float f); //Add Altitude

    int configAtrib(); //returns -1 if gone wrong, >-1 otherwise

};

#endif