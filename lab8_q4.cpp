//This is the library
#include<iostream>
using namespace std;

float maximum(float arr[],int size)   //Function to find the maximum of the elements of the two arrays
{
    int e=arr[0];          //declaring an array
    for(int i=1;i<size;i++)
    {
        if(e<arr[i])               //Defining condition for the maximum
        {
            e=arr[i];
        }
    }
    return e;
}


float minimum(float arr[],int size)   //Function to find the minimum of the elements of the two arrays
{
    int e=arr[0];
    for(int i=1;i<size;i++)
    {
        if(e>arr[i])               //Defining the condition for the minimum
        {
            e=arr[i];
        }
    }
    return e;
}
int main()                            //Driver function
{
    float a,b;                        //Declaring the variables
    int i,j,size1,size2;
    i=0;j=0;
    cout<<"Enter size of the first array: ";
    cin>>size1;                    //Asking for the size of the first array
    float arr1[size1];
    while(i<size1)
    {
        cout<<"Enter value "<<i+1<<": ";
        cin>>a;                    //Asking for the values of the array
        arr1[i]=a;
        i++;
    }
    cout<<"Enter the size of second array: ";
    cin>>size2;                   //Asking for the size of the second array
    float arr2[size2];
    while(j<size2)
    {
        cout<<"Enter value "<<j+1<<": ";
        cin>>b;                  //Asking for the values of the array
        arr2[j]=b;
        j++;
    }
    float arr[size1+size2];      //Adding the two arrays into one array
    for(int k=0;k<size1;k++)
    {
        arr[k]=arr1[k];
    }

    for(int l=size1;l<size1+size2;l++)
    {
        arr[l]=arr2[l-size1];
    }

    cout<<"The largest element of the combined array is: "<<maximum(arr,size1+size2)<<endl;
    cout<<"The smallest element of the combined array is: "<<minimum(arr,size1+size2)<<endl;
    return 0;
}
