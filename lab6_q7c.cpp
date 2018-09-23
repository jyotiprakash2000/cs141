//include library
#include <iostream>
using namespace std;
//defining function for getting the opposite case of character
//Call by value
char changeCase(char a)
{
    char b;
    if (a>='a'&& a<='z')
    {
         b=a-32;    //Condition to convert the lowercase letter into uppercase
    }
    if  (a>='A'&& a<='Z')
    {
         b=a+32;     //Condition to convert the uppercase letter into lowercase
    }
    return b;
}
//Driver function
int main()
{
    char ch;
    cout<<"Enter a character : "<<endl;;
    cin>>ch;              //Asking the user for the character
    changeCase(ch);
    cout<<"The character in other case is : "<<changeCase(ch)<<endl;    //Printing the letter in other case

   return 0;
}
