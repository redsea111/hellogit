#include <iostream>
#include <string>
using namespace std;
#include "Truck.h"

Truck::Truck(string n , int w)
{

      name = n;
      weight = w;
}
string Truck::getName()
{
    return name;

} 

int Truck::getWeight()
{
  return weight;

} 

void Truck::setName (string n)
{
  name = n;
}

void Truck::setWeight(int w)
{
   weight = w;

}

 
