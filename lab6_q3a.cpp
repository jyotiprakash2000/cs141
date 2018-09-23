//include library
#include <iostream>
using namespace std;
//defining function for getting maximum of the two numbers
//call by value
int Maximum(int a1,int a2)
{
    if (a1>a2)             //Condition to find the maximum of two numbers
    {
        return a1;
    }
    else
        return a2;
}


//driver function
int main()
{
    int a,b;
    cout<<"Enter the numbers from which you want to know the bigger number"<<endl;
    cin>>a;
    cin>>b;
    //Call the function that finds maximum of the two numbers using values
    Maximum(a,b);
    cout<<"The maximum out of the two numbers is : "<<Maximum(a,b)<<endl;

    return 0;
}
