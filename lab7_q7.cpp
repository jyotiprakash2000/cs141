//This is the  library
#include<iostream>
using namespace std;

int sum(int a)    //Defining the function for finding the sum of the digits
{
    if (a==0)      //Condition for stooping the recursion
        return 0;
    else
        return a%10+sum(a/10);  //Recursion of the function

}

int main()              //Driver function
{
    int n;              //Declaring the variable
    cout<<"Enter the number of which you want to sum the digits "<<endl;
    cin>>n;             //Asking the user for the no of which he want to find the sum
    cout<<"The sum of the digits of the number is : "<<sum(n)<<endl;      //Printing the result by referring to the function
    return 0;
}

