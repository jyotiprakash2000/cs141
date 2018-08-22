//see our library
#include <iostream>
using namespace std;
int main()
{
double celsius;      //declaring variables 
double fahrenheit;
cout <<" Enter temperature in ceisius"<<endl; //indicating that temp is in celsius
cin >> celsius;
fahrenheit= ((celsius*9)/5)+32;    //converting celsius into fahrenhrit
cout<<" the temperature in fahrenheit is : "<< fahrenheit<< endl;

return 0;
}
