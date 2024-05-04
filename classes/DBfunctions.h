#include <iostream>
#include <libpq-fe.h>
#include <vector>
using namespace std;

 class DBfunctions
 {
 private:
    int querys = 0;
    bool error = false;
    PGconn *connection;
    char *query;
    vector<string> querys;

    void init_querys();

 public:
    int nRows = 0;
    int nCols = 0;

    DBfunctions();
    bool getConnection();
    void closeConnection();
    //no need to insert, we alr have data
    bool getDataToTrip();
 
 
 };
 