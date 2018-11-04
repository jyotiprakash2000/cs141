// This is a library
#include <iostream>
using namespace std;
int myStrLen(char* p)
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)//Loop for counting the length
    {
        count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<< endl;
    char arr[size];//Declaring the array of max size
    cout<<"Enter the string:"<<endl;
    cin>>arr;
    char* p=&arr[0];//point to array
    cout<<"Length of the string:"<<myStrLen(p);//call the function
    return 0;
}
