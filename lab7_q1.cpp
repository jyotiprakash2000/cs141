//This is the library
#include<iostream>
using namespace std;

double power(double a, double b)
{
    if (b!=0)                          //Defining conditions for calculating the power of the number
        return (a*(power(a,b-1)));
    else                               //Terminating the recursion
        return 1;
}

int main()
{
    double a,b,result;
    cout<<"Enter the number to be taken as the base"<<endl;
    cin>>a;                            //Asking the user for the base number
    cout<<"Enter the power"<<endl;
    cin>>b;                            //Asking the user for the power
    result=power(a,b);                             //Referring to the function
    cout<<"The power raised to the given number is "<< result<<endl;   //Displaying the result
    return 0;
}
