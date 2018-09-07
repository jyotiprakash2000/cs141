/*
c program to print hollow square star pattern
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;            // declaring variables
    cout<<" enter the size of pattern "<<endl;       //asking user for pattern
    cin>> n;
    for (i=1;i<=n;i++){                              // condition for printing stars in a row


         for(j=1;j<=n;j++)                            // condition for printing stars in a column
         {
             if (i==1 || i==n)                        //stars are printed in first and last row
             {
                 cout<<"*";
             }
             else
             {
                 if(j==1 || j==n){                    //stars are printed in first and last column
                    cout <<"*";
                 }
                 else { cout<<" ";}             }
         }

cout<<endl;



    }                                                // finally this gives a pattern of hollow square

return 0;
}
