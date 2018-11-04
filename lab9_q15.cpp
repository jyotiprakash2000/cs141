// This is a library

#include <iostream>//include library
using namespace std;
int main()
{
    char arr[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>arr;
    p=&arr[0];
    //Loop to count the rows
    for(int i=0;i<=10;i++)
    {
        //Loop to print the values
        for(int j=i;j<=10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}
