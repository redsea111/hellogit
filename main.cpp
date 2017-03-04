#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Truck.h"
#include <cstdlib>//for "exit()" on some systems

int linearSearch(auto data, auto key);//prototype



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

  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;


  cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        
        result = linearSearch(garage,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
 
 int linearSearch (auto Data, auto key)
 {

	for( unsigned int i = 0; i <Data.size(); i++)
	{
		if (Data[i].getName() == key)
		{
			return i;

}
}
return -1;
}




