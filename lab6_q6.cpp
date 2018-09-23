#include<iostream>  //library

using namespace std;

//call by value
int sumEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;
	for(int i=firstNum;i<=secondNum;i++)    //loop to add even numbers between first and second Num
	{
		if(i%2==0)    //condition to check if the number is even
		   sum+=i;
	}

	return sum;
}


//call by value
int sumOddNumbers(int firstNum,int secondNum)
{
        int sum=0;     //initializing the variable sum as zero so as to prevent it from containing some junk value
	for(int j=firstNum;j<=secondNum;j++)
	{

		if(j%2!=0)    //condition to check if the number is odd or not
		   sum+=j;
        }

		return sum;
}

//call by value
int sumSquareOddNumbers(int firstNum,int secondNum)
{
	int sum=0;    //initializing variable sum as zero else it may contain some junk value
	int k=firstNum;
	while(k<=secondNum)
	{
		if(k%2!=0)             //condition to check for the number being odd
		  sum+=(k*k);
		k++;
	}

        return sum;
}


//call by value
int sumSquareEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;   //initializing sum as zero so as to prevent it from containing some junk value
	int l=firstNum;
	while(l<=secondNum)
	{
		if(l%2==0)
		  sum+=(l*l);
		l++;
	}

	return sum;
}

int main()
{
	//variable declaration
	int firstNum,secondNum;
	int sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	//asking the user to input the values of first and second integers
	cout<<"Enter the value of first integer\n";
	cin>>firstNum;
	cout<<"Enter the value of second integer\n";
	cin>>secondNum;
	sumEven=sumEvenNumbers(firstNum,secondNum);               //assigns the returned values of functions to variables
	sumOdd=sumOddNumbers(firstNum,secondNum);
	sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
	sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);
	cout<<"Result:"<<endl;                                      //displaying the results
	cout<<"The sum of even numbers is "<<sumEven<<endl;
	cout<<"The sum of odd numbers is "<<sumOdd<<endl;
	cout<<"The sum of squares of even numbers is "<<sumSquareEven<<endl;
	cout<<"The sum of squares of odd numbers is "<<sumSquareOdd<<endl;
	//return statement
	return 0;
}
