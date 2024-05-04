# Custom Map with interaction for travelers | projecte-hackUPC 

Project done at HackUPC with the purpose of building an app to interconnect people given his data (in this case a data set of multiple travelers) using multiple algorithms.

## Team

- **<a href="https://github.com/AndresLaptes" target="_blank">@AndresLaptes</a>**
- **<a href="https://github.com/DidacDV" target="_blank">@DidacDV</a>**
- **<a href="https://github.com/omar-cornejo" target="_blank">@omar-cornejo</a>**
- **<a href="https://github.com/rubenpalavacas" target="_blank">@rubenpalavacas</a>**

## Tecnhologies used

- **Qt:** We use QT wantint to make an interface so that users can see in a map those that also land in the same           place and around the same time.

    The map is created with QT and all the widgets of the window too, using c++ to modify it's classes and implement       our own functions to use as signals and slots when interacting so that we reach our goal. It still has some work       to do, such as adding more ways of marking those users near you and being able to show your own interests.
  
- **Python y C++:** These have been our go to languages for coding more complex functions or getting the info stored       and making it possible so that we can use it.


   C++ is mainly used for the QT functions and the implementation of  the classes, including the one to                   interact with the database. Python is also used for the creation of another map that has to be connected with the      QT one, using the framework **Flask**. We also coombine these two languages such as using c++ to read from the         stdout of a python script that makes api requests for getting the  atributes of a city.
  
- **PostgreSQL:** The DBMS that we use, it only runs on a localhost, something that has to be improved or changed to another tecnology.


  We use a dataset provided as an example by TravelPerk  With the **libpq-fe** library that allows us to use a low       level API of PostgreSQL we created a class to get the data and set it to our variables. It is also so that we can      give the database the latitude and longitude to each city without doing it in standard code, and being able to         display info on the map more quickly.

**!!!Not quite finished**  (problems with hosting the database and bringing it outside the localhost)
