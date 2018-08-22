//this is our niser library
#include <iostream>
using namespace std;
int main()
{
double cm;      //Declaring variables
double m;
double km;
cout <<"Enter the length in cm"<<endl; // Asking about the length in cm

cin>>cm;
m=cm/100;
km=cm/100000;                //converting cm into mand km 
cout<<"the length in meter is : "<< m << endl;
cout<<"the length in kilometer is :"<< km<< endl;

return 0;
     }          
                             
