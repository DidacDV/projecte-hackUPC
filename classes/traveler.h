#include <iostream>
#include <string>

using namespace std;

class traveler {
    private:
        string name; 

    public:
        // Pre: True
        // Post: Return name of traveler
        string getName() const;
};