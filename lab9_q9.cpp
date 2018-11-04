// This is a library
#include <iostream>
using namespace std;
bool contains(char* p,char c)
{
    char t='\0';
    for(int i=0;*(p+i)!='\0';i++)//Loop to check each character of string
    {
        if(*(p+i)==c)//To check whether the character of the string is same as the given characteror not 
        t=*(p+i);//Assigning the value to new variable
    }
    if(t!='\0')//to check whether the value of teh variable is null or not
    return true;
    else
    return false;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<<endl;
    cin>>size;
    char ar[size];//Declare the array with maximum size
    cout<<"Enter input to array"<<endl;
    cin>>ar;
    char c;
    cout<<"Enter the you want to find in the array"<<endl;
    cin>>c;
    char* p=&ar[0];//Point to the array
    cout<<contains(p,c);//Call the function
    return 0;
}
