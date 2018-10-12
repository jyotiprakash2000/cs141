//This is the library
#include<iostream>
using namespace std;

long reverse(long n,long rev)   //Defining the function for the palindrome
{
    if(n!=0)                  //Condition for finding the palindrome
    {
        rev=rev*10+n%10;
        reverse(n/10,rev);
    }

    else
        {
            return rev;
        }

}

int main()                    //Driver function
{
    long n,revs,num;          //Declaring the variables
    cout<<"Enter a number: ";
    cin>>n;                    //Asking the user for the number
    num=n;
    revs=reverse(n,0);         //Referring to the defined function
    if (revs==num)
    {
        cout<<"The number is a palindrome!!!"<<endl;
    }
    else
        cout<<"The number is not a palindrome!"<<endl;    //Printing the result
    return 0;
}
