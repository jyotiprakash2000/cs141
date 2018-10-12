//This is the library
#include<iostream>
using namespace std;

 int printnumbers (int a , int b)           //Defining the function for printing natural numbers
 {
     if (a>b)                   //Condition for terminating recursion
        return 1;
     else
        {
         cout<<a<<endl;         //Printing numbers by skipping one number
         a+=2;
         printnumbers(a,b);          //Recursion of the function
         return 0;
        }
 }
 int main ()                //Driver function
 {
     int a=1;
     int b;             //Declaring and Initializing variables
     cout<<"Enter the number till which you want to write the even or odd numbers "<<endl;      //Asking the number for entering the number upto which even and odd numbers are to be printed
     cin>>b;
     cout<<"The even numbers from 1 to b are "<<endl ;      //Printing the series of even numbers
     printnumbers(0,b);                             //Referring to the function
     cout<<"The odd numbers from 1 to b are "<<endl;        //Printing the series of odd numbers
     printnumbers(1,b);                             //Referring to the function

     return 0;
 }
