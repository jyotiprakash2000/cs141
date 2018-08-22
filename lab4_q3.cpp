// this is a library
#include <iostream>
using namespace std;
int main()
{
double celsius;   //declaring variables
double fahrenheit;
cout <<" Enter the tempreature in fahrenheit"<< endl;        //Asking for temperature in fahrenheit 
cin >> fahrenheit;
celsius= ((fahrenheit-32)*5)/9;         // converting fahrenheit into celsius
cout<<" the temperature in celsius is : "<< celsius << endl;
   
      return 0;
             }


