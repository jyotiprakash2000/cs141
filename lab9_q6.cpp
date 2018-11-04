// This is a library
#include <iostream>
using namespace std;
int countEven(int* p,int size)
{
    int count=0;
    for(int i=0;i<size;i++)     //Loop for checking each value
    {
        if(*(p+i)%2==0)         //To check the value is even or odd
        {
            count++;            // total number of even number
        }
    }
    return count;
}
int main()                      //Main function
{
                                //Declaring array of max size and give input
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int* p=&arr[0];             //Point to array
    cout<<"No. of even numbers:"<<countEven(p,size);//call the function
}
