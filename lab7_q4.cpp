//This is the library
#include<iostream>
using namespace std;


int sum(int a, int b)  //Defining the function for finding the sum
{
    if(a>b)            //Condition for stooping the recursion
        return 0;
    else
       {
        cout<<a+sum(a++,b); //Recursion of the function
        return 0;
        }
}
int main()            //Driver function
{
    int n;              //Declaring a variable
    cout<<"Enter the number till which you want sum of natural numbers"<<endl;
    cin>>n;           //Asking the user for the no till which he want to find the sum
    cout<<"The sum of natural numbers is :"<<sum(1,n);    //Printing the result by referring to the function
    return 0;
}
