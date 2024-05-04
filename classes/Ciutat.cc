#include <Ciutat.h>

Ciutat::Ciutat(string nom){
    name = nom; 
}

string Ciutat::getName() const {
    return name;
}

float Ciutat::getLatitude() const {
    return Latitude;
}

float Ciutat::getLongitude() const {
    return Longitude;
}

void Ciutat::addLongitude(float f) {
    Longitude = f;
}

void Ciutat::addLatitude(float f) {
    Latitude = f;
}

int Ciutat::configAtrib() {
    std::string command = "python3 ./CoordScript/CoordsGetter.py " + name;
    FILE *ownPipe = popen(command.c_str(), "r");
    if (!ownPipe) {
        cout << "Can't open python script" << endl;
    }
    char buffer[256];
    int i = 0;
    while (fgets(buffer, sizeof(buffer),ownPipe) != nullptr) {
        if(buffer != " ") {
            float val = stof(buffer);
            if (i == 0) {
                addLatitude(val);
                ++i;
            } 
            else if(i == 1) {
                addLongitude(val);
                ++i;
            }
        }
    }
    pclose(ownPipe); //work over
    return 0;
}