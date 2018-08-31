//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a=0,n,b;			//Declaring the variables
	cout<<"Enter the value of n"<<endl;	//Asking the user for the value of n
	cin>>n;			
	for(a=1;a<=n;++a)		//Checking if the natural numbers are less than n 		
	{
		if(a%2==0)		//Checking if the number is even
		{
			b+=a;
		}		
	}
		cout<<b;	//Printing the sum of all even natural numbers
 return 0;
} 
