//Library
#include <iostream>
using namespace std;

float largest(float arr[],int size)  //Function for finding the maximum of the elements in array
{
    int large=arr[0];           //Declaring an array
    for(int i=1;i<size;i++)          //Condition for finding the maximum of the elements
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    return large;
}


float smallest(float arr[],int size)        //Function for finding the minimum of the elements in array
{
    int small=arr[0];
    for(int i=1;i<size;i++)     //Condition for finding the minimum of the elements
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    return small;
}

float mean(float arr[],int size)            //Function for finding the mean of the elements in array
{
    float sum=0;            //Initializing variable
    for(int i=0;i<size;i++)         //Condition for finding the mean of the elements
    {
        sum=sum+arr[i];
    }
    float avg=sum/size;
    return avg;
}

float median(float arr[],int size)             //Function for finding the median of the elements in array
{
    int temp;           //Declaring variables
    float medn;
    for(int i=0;i<size;i++)                //Condition for finding the median of the elements
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }


    }
    if(size%2!=0)
    {
        medn=arr[((size+1)/2)-1];
        return medn;
    }
    else
        medn=(arr[(size/2)-1]+arr[size/2])/2;
        return medn;



}

int mode(float arr[],int size)              //Function for finding the mode of the elements in array
{
    int count[size];      //Calling above function
    for(int h=0;h<size;h++)                //Condition for finding the mode of the elements
    {
        count[h]=0;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;i!=j&&j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
    }
    int temp=0;
    for(int k=1;k<size;k++)
    {
        if(count[temp]<count[k])
        {
            temp=k;
        }
    }
    return arr[temp];
}

int main()          //Driver function
{
    float a;
    int i,size;
    i=0;
    cout<<"Enter the size of the array: ";      //Asking the user for entering the size of the array
    cin>>size;
    float arr[size];
    while(i<size)
    {
        cout<<"Enter value "<<i+1<<": ";        //Asking the user for entering the elements in array
        cin>>a;
        arr[i]=a;
        i++;
    }
    cout<<"The maximum value in the array is: "<<largest(arr,size)<<endl;        //Printing out the mean , median ,mode ,maximum and minimum of the elements in array
    cout<<"The minimum value in the array is: "<<smallest(arr,size)<<endl;
    cout<<"The mean of the values of the array is: "<<mean(arr,size)<<endl;
    cout<<"The median of the array is: "<<median(arr,size)<<endl;
    cout<<"The mode of the given array is: "<<mode(arr,size)<<endl;
    return 0;
}



