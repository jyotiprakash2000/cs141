//include library
#include <iostream>
using namespace std;
//defining function for getting the uppercase character
//Call by value
char toUpper(char a)
{
    char b;
    b=a-32;          //Condition to convert the lowercase letter into uppercase
    return b;
}
//Driver function
int main()
{
    char ch;
    cout<<"Enter a character in lowercase: "<<endl;;
    cin>>ch;              //Asking the user for the lowercase character
    toUpper(ch);
    cout<<"The character in uppercase is : "<<toUpper(ch)<<endl;    //Printing the letter in uppercase

   return 0;
}
