// This is a library

#include <iostream>
using namespace std;
int main()
{
    char arr[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>arr;
    p=&arr[0];
    //Loop to print values starting from the last term
    for(int i=9;i>=0;i--)
    {
        //Loop to print the values till the last term
        for(int j=i;j<10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}
