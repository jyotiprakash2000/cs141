// This is a library

#include <iostream>

using namespace std;

int main()
{
    //Declare variables and pointers
    int x;int* p;
    char y;char* q;
    float z;float* r;
    double a;double* s;
    bool b;bool* t;
    //Print the size
    cout<<"size of int and its pointer are respectively:"<<sizeof(x)<<" and "<<sizeof(p)<<endl;
    cout<<"size of char and its pointer are respectively:"<<sizeof(y)<<" and "<<sizeof(q)<<endl;
    cout<<"size of float and its pointer are respectively:"<<sizeof(z)<<" and "<<sizeof(r)<<endl;
    cout<<"size of double and its pointer are respectively:"<<sizeof(a)<<" and "<<sizeof(s)<<endl;
    cout<<"size of boolean and its pointer are respectively:"<<sizeof(b)<<" and "<<sizeof(t)<<endl;
    return 0;
}
