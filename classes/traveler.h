#ifndef TRAVELER_H
#define TRAVELER_H

#include <iostream>
#include <string>
using namespace std;

class Traveler {
    private:
        string name; 

    public:
        string getName() const;
};

#endif