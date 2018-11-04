// This is a library
#include <iostream>
using namespace std;
int main()                            //Main function
{
   char c[10] ="abcde";               //Declaring the array
   cout<<"Given array:"<<c<<endl;
   char* cptr;                        //Declaring the pointer
   cptr=c;                            //point to array
   cout<<"Reverse:";
   for(int i=10;i>=0;i--)             //Use loop to print characters in reverse order
   {
       cout<<*(cptr+i);
   }
   return 0;
}
