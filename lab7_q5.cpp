//This is the library
#include<iostream>
using namespace std;

int sum(int n)   //recursive function to find sum of even and odd numbers
{
	if(n<=0)         //Condition for the stopping the recursion
	     return 0;

	else
        {
	     return n+sum(n-2);        //recursive statement
        }
}

int main()           //Driver function
{
	int n;
	cout<<"Enter the range of the sum to be calculated";
	cin>>n;          //Asking the user for the number
	if(n%2==0)        //checks if the input is even or odd
        {
		cout<<"Sum of even numbers: "<<sum(n)<<endl;        //Printing the series of even and odd numbers
		cout<<"Sum of odd numbers: "<<sum(n-1)<<endl;
        }
        else
        {
		cout<<"Sum of even numbers: "<<sum(n-1)<<endl;
		cout<<"Sum of odd numbers: "<<sum(n)<<endl;
        }
	return 0;
}
