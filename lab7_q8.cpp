//This is the library
#include<iostream>
using namespace std;

int factorial(int a)   //Defining the function for finding the factorial
{
    if (a==1)          //Condition for finding factorial
        return 1;
    else
        return a*factorial(a-1);   //Recursion of the function

}

int main()           //Driver function
{
    int n;           //Declaring the variable
    cout<<"Enter the number of which you want to find the factorial "<<endl;
    cin>>n;          //Asking user for the number
    cout<<"Factorial of the number is : "<<factorial(n)<<endl;      //Printing the result
    return 0;
}
