#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Truck.h"


int main ()
{
 string name;
 int w;
 vector<Truck> garage;
 Truck toyota, nissan, suzuki, mazda;
cout <<"Enter first truck name: "<< endl;
cin >>name;
cout <<"Enter weight:  "<< endl;
cin >>w;
toyota.setName(name);
toyota.setWeight(w);

cout <<"Enter second truck name: "<< endl;
cin >>name;
cout <<"Enter weight: "<< endl;
cin >> w;
nissan.setName(name);
nissan.setWeight(w);

cout <<"Enter third truck name: "<< endl;
cin >>name;
cout <<"Enter weight: "<< endl;
cin >> w;
suzuki.setName(name);
suzuki.setWeight(w);

cout <<"Enter fourth truck name: "<< endl;
cin >>name;
cout <<"Enter weight: "<< endl;
cin >> w;
mazda.setName(name);
mazda.setWeight(w);

garage.push_back(toyota);
garage.push_back(nissan);
garage.push_back(suzuki);
garage.push_back(mazda);


for(unsigned int i = 0; i < garage.size(); i++)
 {  
  cout << garage[i].getName() << endl;
  
  cout << garage[i].getWeight() << endl;
}
return 0;
}

 



