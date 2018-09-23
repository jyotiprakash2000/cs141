//include library
#include <iostream>
using namespace std;
//defining function for getting the lowercase character
//Call by value
char toLower(char a)
{
    char b;
    b=a+32;          //Condition to convert the uppercase letter into lowercase
    return b;
}
//Driver function
int main()
{
    char ch;
    cout<<"Enter a character in uppercase: "<<endl;;
    cin>>ch;              //Asking the user for the uppercase character
    toLower(ch);
    cout<<"The character in lowercase is : "<<toLower(ch)<<endl;    //Printing the letter in lowercase

   return 0;
}
