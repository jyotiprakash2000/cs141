//include library
#include <iostream>
using namespace std;
//defining function for getting minimum of two numbers
//call by value
int Minimum(int a1,int a2)
{
    if (a1<a2)         //Conditions to find the minimum of two numbers
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
    cout<<"Enter the numbers from which you want to know the smaller number"<<endl;
    cin>>a;
    cin>>b;
    //Call the function using which you can find the minimum of two numbers
    Minimum(a,b);
    cout<<"The minimum out of the two numbers is : "<<Minimum(a,b)<<endl;           //Displaying the minimum of the two results

    return 0;
}
