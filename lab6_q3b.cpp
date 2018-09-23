//include library
#include <iostream>
using namespace std;
//defining function for getting maximum of two numbers
//call by reference
void Maximum(int &a1,int &a2,int &max)
{
    if (a1>a2)           //Condition to find the maximum of the two numbers
    {
        max=a1;
    }
    else
        max=a2;
}


//driver function
int main()
{
    int a,b,c;
    cout<<"Enter the numbers from which you want to know the bigger number"<<endl;  //asking the user for numbers to find the maximum
    cin>>a;
    cin>>b;
    //Call the function that finds the maximum of the two numbers using reference
    Maximum(a,b,c);
    cout<<"The maximum out of the two numbers is : "<<c<<endl;          //Displaying the maximum number

    return 0;
}
