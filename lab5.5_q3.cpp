/*
  c program to print a hollow square star pattern containing stars in its diagonal
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
                 if(j==1 || j==n || i==j|| i+j== n+1){                    //stars are printed in first and last column and also in diagonals
                    cout <<"*";
                 }
                 else { cout<<" ";}             }
         }

cout<<endl;



    }                                                // finally this gives a pattern of hollow square containing stars in diagonal

return 0;
}
