//THis is the library
#include<iostream>
using namespace std;

int reverse (int a)  //Defining the function for finding the reverse
{
    if (a==0)         //Condition for stopping the recursion
        return 1;
    else
        cout<<a%10;
        a=a/10;
        return reverse(a);   //Recursion of the function
}

int main()        //Driver function
{
    int n;        //Declaring the variables
    cout<<"Enter the number of which you want to find the reverse "<<endl;
    cin>>n;      //Asking the user for the number
    cout<<"The number in reverse is : "<<endl;     //Printing the result
    reverse (n);    //Referring the function which is defined
    return 0;
}
