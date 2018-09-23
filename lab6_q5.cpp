//include library
#include <iostream>
using namespace std;
//defining function for getting the d=sum of two numbers
//Call by value
int sum(int a1,int a2)
{
    int s;
    s=a1+a2;
    return s;
}
//define function for getting maximum of the two numbers
//call by value
int Maximum(int b1,int b2)
{
    if (b1>b2)             //Condition to find the maximum of two numbers
    {
        return b1;
    }
    else
        return b2;
}
//define function for getting minimum of two numbers
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
    //declare variables
    int a,b,i;
    cout<<"Enter the numbers on which you want to perform the operations"<<endl;
    cin>>a;           //asking the user for input 1
    cin>>b;           //asking the user for input 2
    cout<<"What operation would you want to perform on the two numbers : Finding sum or finding maximum or finding minimum"<<endl;
    cout<<"To find the sum press 1"<<endl;
    cout<<"To find the maximum press 2"<<endl;         //Asking the user for which operation he would want to perform
    cout<<"To find the minimum press 3"<<endl;
    cin>>i;                                            //Asking the user for the input
    //condition for calling the functions
    if(i==1)
    {
        cout<<"The sum of the two given numbers is: "<<sum(a,b)<<endl;         //Displaying sum
    }
    else if(i==2)
    {
        cout<<"The maximum of the two given numbers is: "<<Maximum(a,b)<<endl;   //Displaying maximum
    }
    else if(i==3)
    {
        cout<<"The minimum of the two given numbers is: "<<Minimum(a,b)<<endl;   //Displaying minimum
    }
    else
        cout<<"Invalid Input!!! Please put valid inputs";

    return 0;

}

