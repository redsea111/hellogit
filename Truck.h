#include <iostream>
#include <string>
#ifndef TRUCK_H
#define TRUCK_H
using namespace std;

class Truck
{

   private:

    string name;
    int weight;

   public:
   
    Truck(string = " ", int = 0);

    string getName();

    int getWeight();
 
    void setName (string);

    void setWeight (int);

};
#endif    
