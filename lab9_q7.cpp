// This is a library
#include <iostream>
using namespace std;
double* maximum(double* a, int size)
{
   
    int x;                                  //sort array in descending order

    for(int i=0;i<size;i++)
    {
	    for(int j=i+1;j<size;j++)
	    {
		    if(*(a+i)<*(a+j))
		    {
			    x=*(a+i);
			    *(a+i)=*(a+j);
			    *(a+j)=x;
		    }
	    }
    }
    return a;
}
int main()                                 // Main function
{
                                           //Give the size of the array and put input
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    double arr[size];
    if(size!=0)//Checking the size of the integer wheather it is zero or not
    {
        cout<<"Enter input(charcter by character)to array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        double* p=&arr[0];
        cout<<"Max:"<<*maximum(p,size);//call the function
    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max=NULL";
    }
    return 0;
}
