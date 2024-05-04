#include "Ciutat.h"

int main() {
    Ciutat ciut("London");
    cout << ciut.getNom() << endl;
    ciut.configAtrib();
    cout << ciut.getLatitude() << " " << ciut.getLongitude() << endl;
}