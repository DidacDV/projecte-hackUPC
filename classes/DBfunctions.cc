#include "DBfunctions.h"

 DBfunctions::DBfunctions()
 {
    connection = nullptr;
 }

bool DBfunctions::getConnection() {
    connection = PQconnectdb("host = 147.83.01.132 port = 5432 dbname = hackupc user=postgres password = postgres");
    switch (PQstatus(connection))
        {
        case CONNECTION_STARTED:
            cout << "Connecting ..."<< endl;
            break;
        
        case CONNECTION_MADE:
            cout << "Connection made, sending..." << endl;
            break;
        case CONNECTION_AUTH_OK:
            cout << "Correct authentication" << endl;
            break;
        default:
            break;
        }
        if (PQstatus(connection) != CONNECTION_OK) {
            cout << "Connection error: " << PQerrorMessage(connection) << endl;
            PQfinish(connection); //close conection incase of failure
            return false;
        }
        else {
            cout << "Connection succesful" << endl;
            return true;
        }
    return false;
}

void DBfunctions::closeConnection() {
    if (connection != nullptr) PQfinish(connection);
}

void DBfunctions::init_querys() {

}
