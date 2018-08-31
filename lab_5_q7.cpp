
//This is a library
#include<iostream>
using namespace std;
int main()
{
	int n;		//Declaring a variable
	cout<<"Enter the value of n"<<endl; 	//Asking the user for the value of n
	cin>>n;
	int a=1;
	while(a<=n)			//Checking if the number is less than n
	{
	
		cout<<n<<endl;
		n--;			//Printing out all the natural numbers from 1 to n in reverse order
	}
 return 0;
}
