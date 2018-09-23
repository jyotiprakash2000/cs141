//include library
#include <iostream>
using namespace std;
//defining function for getting minimum of two numbers
//call by reference
int Minimum(int &a1,int &a2,int &min)           //call by reference
{
    if (a1<a2)             //Condition to find the minimum out of two numbers
    {
        min=a1;
    }
    else
        min=a2;
}


//driver function
int main()
{
    int a,b,c;
    cout<<"Enter the numbers from which you want to know the smaller number"<<endl;
    cin>>a;
    cin>>b;
    //Call the function using which you can find the minimum of two numbers
    Minimum(a,b,c);
    cout<<"The minimum out of the two numbers is : "<<c<<endl;          //Displaying the minimum of the two numbers

    return 0;
}
