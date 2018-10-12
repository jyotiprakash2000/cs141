//This is the library
#include<iostream>
using namespace std;

 int printnaturalnumbers (int a , int b) //Defining the function for printing the natural numbers
 {
     if (a>b)
        return 1;           //Condition for terminating the recursion
     else
        {
            cout<<a<<endl;
            printnaturalnumbers(++a,b);             //Recursion of the function
            return 0;
        }
 }

 int main ()                //Driver function
 {
     int a=1;
     int b;                 //Declaring and Defining variables
     cout<<"Enter the number till which you want to write the natural numbers "<<endl;            //Asking the user for entering the number to which natural numbers are to be printed
     cin>>b;
     cout<<"The numbers from 1 to b are "<<endl;                //Printing the natural numbers from 1 to n
     printnaturalnumbers(1,b);                      //Referring to the function
     return 0;
 }
