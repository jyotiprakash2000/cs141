//This is a library
#include<iostream>
using namespace std;
int main()
{
	int n;		//Declaring a variable 
	cout<<"Enter the value of n"<<endl;	//Asking the user to enter the value of n
	cin>>n;
	int a=1;		//Assigning a value to the variable
	while(a<=n)		//Checking if the number is less than or equal to n 
	{
	
		cout<<a<<endl;		//Printing out all natural numbers from 1 to n
		a++;		
	}
 return 0;
}

