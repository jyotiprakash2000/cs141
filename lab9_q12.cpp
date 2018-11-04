//This is a library

#include <iostream>

using namespace std;

int main()
{
    //Declare variables and pointer
    int a,b;int* p=&a;//Pointer p points to a
    b=*p;//Assigning value of *p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;//Print
    a=2,b=3;//Assigning value to variables
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;//Print
    p=&b;//Pointing to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p;//Print
    return 0;
}
