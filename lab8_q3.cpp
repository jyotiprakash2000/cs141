//This is the library
#include<iostream>
using namespace std;

int klarge(float arr[],int size,int k)     //Defining the function for finding the kth largest element
{
    int large;    //Declaring a variable
    int arr2[size];    //Declaring a array
    for(int i=0;i<size;i++)           //Condition  for finding the k th largest element
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                large=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=large;

            }
        }
    }
    return arr[size-k];
}

int ksmall(float arr[],int size,int k)      //Defining the function for finding the kth smallest element
{
    int small;       //Declaring a variable
    int arr2[size];
    for(int i=0;i<size;i++)                           //Condition  for finding the k th smallest element
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                small=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=small;

            }
        }
    }
    return arr[size-k];
}

int main()          //Driver function
{
    float a;
    int i,size,k;
    i=0;
    cout<<"Enter size of the array: ";        //Asking the user for the size of the array
    cin>>size;
    cout<<"Enter the value of k: ";          //Asking for the value of k
    cin>>k;
    float arr[size];
    while(i<size)
    {
        cout<<"Enter value "<<i+1<<": ";       //Asking the user for entering the elements
        cin>>a;
        arr[i]=a;
        i++;
    }
    cout<<"The "<<k<<"th largest element of the array is: "<<klarge(arr,size,k)<<endl;    //Printing out the kth largest and smallest element
    cout<<"The "<<k<<"th smallest element of the array is: "<<ksmall(arr,size,k)<<endl;
    return 0;

}
