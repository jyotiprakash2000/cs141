//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a=0,n,b;		//Assigning and declaring variables 
	cout<<"Enter the value of n"<<endl;		//Asking the user to enter the value of n
	cin>>n;
	for(a=1;a<=n;++a)			//Checking if a is equal to 1 and if a is less than or equal to 1
	{
		b+=a;		
	}
		cout<<b;		//Printing out the sum of all natural numbers from 1 to n 
 return 0;
}
