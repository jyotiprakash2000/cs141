//include library
#include <iostream>
using namespace std;
//defining the function for adding the two required numbers
//call by value
int sum(int a_1,int a_2)
{
    int s;
    s=a_1+a_2;              //Calculating the sum
    return s;
}


//driver function
int main()
{
    int a,b;
    cout<<"Enter two integers that you wish to add: "<<endl;
    cin>>a;
    cin>>b;
    //call function that sums two numbers
    cout<<"The sum of the entered numbers is: "<<sum(a,b)<<endl;

    return 0;
}
