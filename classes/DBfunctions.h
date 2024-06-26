#include <iostream>
#include <fstream>
#include "libpq-fe.h"
#include "Ciutat.h"
#include <vector>
using namespace std;

 class DBfunctions
 {
 private:
    int nquerys = 0;
    bool error = false;
    PGconn *connection;
    char *query;
    vector<string> querys;
    int current_trip = 939;

   
   void insertPositions(const string& cityName);

 public:
    int nRows = 0;
    int nCols = 0;

    DBfunctions();
    bool getConnection();
    void closeConnection();
    //no need to insert, we alr have data
    bool getDataToTrip();
   
    void init_DB();
    void init_cities();
    void init_travelers();
    
    void get_traveller(const string& name);
    //obatinPosition updates all of the latitudes and longitudes of the cities inside the DB
    void updatePositions();;

    void displayPositions();
    void insertTrip(const string& travelerName, const string& destinationCity, const string& arrivalCity, const string& arrivalDate, const string& departureDate);
  };
 