//include library
#include <iostream>
using namespace std;
//define function for adding two numbers
//call by reference
void sum(int &a_1,int &a_2,int &s)
{
    s=a_1+a_2;              //calculating sum
}


//driver function
int main()
{
    int a,b,returnsum;
    cout<<"Enter two integers that you wish to add: "<<endl;   //asking the user the integers he want to add
    cin>>a;
    cin>>b;
    //call function that sums two numbers using reference
    sum(a,b,returnsum);
    cout<<"The sum of the entered numbers is: "<<returnsum<<endl;

    return 0;
}
