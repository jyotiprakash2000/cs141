//A Library
#include<iostream>
using namespace std;

int summ(int n)     //function for finding the sum of elements in array
{
    int a,i,b;     //Declaring variables
    int arr[n];       //Declaring an array
    for(i=0;i<n;i++)    //Condition for entering the elements
    {
        cout<<"Enter number to be allocated in array"<<endl;   //Asking the user for elements
        cin>>a;
        arr[i]=a;
    }

    int sum=0;   //Initializing a variable
    int s;
    for(b=0;b<n;b++)     //Condition for finding the sum of elements is array
    {
        s=arr[b];
        sum+=s;
    }
    return sum;
}

int main()    //Driver function
{
    int n;
    cout<<"Enter the size of the array"<<endl;     //Asking the user for entering the size of the array
    cin>>n;
    cout<<"The sum of the elements in array = "<<summ(n)<<endl;     //Printing out the sum of elements in array
    return 0;
}
