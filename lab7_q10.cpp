//This is the library
#include<iostream>
using namespace std;

int gcd(int a,int b)  //Function to find the gcd of two numbers
{
    if (b != 0)       //Condition for the recursion of the function
       return gcd(b, a%b);
    else
       return a;      //Returning the value for the other condition
}


int main()           //Driver function
{
    int x,y;         //Declaring the variables
    cout<<"Enter a number: ";
    cin>>x;            //Asking for the first number
    cout<<"Enter another number: ";
    cin>>y;            //Asking for the second number
    cout<<"The GCD of "<<x<<" and "<<y<<" is "<<gcd(x,y)<<endl;      //printing the result
    return 0;

}

