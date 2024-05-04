#include "DBfunctions.h"

 DBfunctions::DBfunctions()
 {
    connection = nullptr;
 }

bool DBfunctions::getConnection() {
    connection = PQconnectdb("host = localhost port = 5432 dbname = hackupc user=postgres password = postgres");
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

void DBfunctions::init_DB(){
    init_cities();
    init_travelers();
}

void DBfunctions::init_cities() {
    getConnection();
    const char *sql = "CREATE TABLE cities ("
                      "cityname VARCHAR(50) PRIMARY KEY,"
                      "latitude FLOAT,"
                      "longitude FLOAT"
                       ")";
    PGresult *res = PQexec(connection, sql);
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        std::cerr << "Error al crear la tabla: " << PQresultErrorMessage(res) << std::endl;
        PQclear(res);
        PQfinish(connection);
        exit;
    }

    std::cout << "Tabla de viajeros creada correctamente." << std::endl;

    string consult = "insert into cities (cityname) select distinct arrivalcity from trip;";
    
    PGresult *result = PQexecParams(connection, consult.c_str(), 0, NULL, NULL, NULL, NULL, 0);

}

void DBfunctions::init_travelers() {
    getConnection();
    const char *sql = "CREATE TABLE traveler ("
                      "name VARCHAR(50) PRIMARY KEY"
                       ")";
    PGresult *res = PQexec(connection, sql);
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        std::cerr << "Error al crear la tabla: " << PQresultErrorMessage(res) << std::endl;
        PQclear(res);
        PQfinish(connection);
        exit;
    }

    std::cout << "Tabla de viajeros creada correctamente." << std::endl;
    string consult = "insert into traveler (name) select travellername from trip;";
    
    PGresult *result = PQexecParams(connection, consult.c_str(), 0, NULL, NULL, NULL, NULL, 0);
}

void DBfunctions::get_traveller(const string& name){
    getConnection();
    const char *consult = "SELECT * FROM trip WHERE tripid = $1";

    const char *parametros[1] = {name.c_str()};
    PGresult *result = PQexecParams(connection, consult, 1, NULL, parametros, NULL, NULL, 0);

    if (PQresultStatus(result) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Error al ejecutar la consulta: %s\n", PQerrorMessage(connection));
        PQclear(result);
        PQfinish(connection);
        exit(1);
    }

    int num_filas = PQntuples(result);
    if (num_filas > 0) {
        // Aquí puedes procesar los datos obtenidos, por ejemplo, imprimirlos
        for (int i = 0; i < num_filas; i++) {
            printf("ID: %s, Nombre: %s, Otros_campos: %s\n",
                   PQgetvalue(result, i, 0),
                   PQgetvalue(result, i, 1),
                   PQgetvalue(result, i, 2));
        }
    } else {
        printf("No se encontró ningún viajero con el ID proporcionado.\n");
    }

    // Libera los recursos
    PQclear(result);
    closeConnection();
}

void DBfunctions::updatePositions(const string& param){
    getConnection();
    string consult = "SELECT " + param + " FROM cities";
    
    PGresult *result = PQexecParams(connection, consult.c_str(), 0, NULL, NULL, NULL, NULL, 0);

    if (PQresultStatus(result) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Error al ejecutar la consulta: %s\n", PQerrorMessage(connection));
        PQclear(result);
        PQfinish(connection);
        exit(1);
    }

    int num_cities = PQntuples(result);
    if (num_cities > 0) {
        for (int i = 0; i < num_cities; i++) {
            string city = PQgetvalue(result, i, 0);
            cout << "Updating position for city: " << city << endl; 
            insertPositions(city);
        }
    } else {
        printf("No hay ciudades que tratar.\n");
    }

    // Free resources
    PQclear(result);
    closeConnection();
}

void DBfunctions::insertPositions(const string& cityName){
    getConnection();



    float latitude = 4;


    float longitude = 5;

    //Setup of the query
    std::string consult = "UPDATE cities SET latitude = $1, longitude = $2 WHERE cityname = $3";


    //Parameters of the query.
    const char *parametros[3] = {std::to_string(latitude).c_str(), std::to_string(longitude).c_str(), cityName.c_str()};
    
    //Execution of the query
    PGresult *result = PQexecParams(connection, consult.c_str(), 3, NULL, NULL, NULL, NULL, 0);

    //Check for errors
     if (PQresultStatus(result) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Error al ejecutar la consulta: %s\n", PQerrorMessage(connection));
        PQclear(result);
        PQfinish(connection);
        exit(1);
    } else {
        printf("Se han actualizado correctamente los valores de latitud y longitud para la ciudad en la tabla 'cities'.\n");
    }

    // Free resources
    PQclear(result);
    // CONNECTION IS NOT CLOSED AS THIS FUNCTION WILL ONLY BE CALLED WITHIN "updatePositions".
}

void DBfunctions::displayPositions(){
    
}
