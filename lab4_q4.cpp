//  this is a library
#include <iostream>
using namespace std;
int main()
{
int mdys,yrs,wks,dys;    //declaring variables
cout << "Enter the number of dys"<<endl;  // Number of dys to be converted into yrs,wks and dys
cin >> mdys;
yrs= mdys/365;      //calculating yrs
wks=(mdys%365)/7;   //calculating wks
dys=(mdys%365)%7;   //calculating dys
cout<< yrs <<"yrs"<<endl;
cout<< wks <<"wks"<<endl;
cout<< dys <<"dys"<<endl;       //printing the dys into yrs,wks and dys

   return 0;
    }
 

