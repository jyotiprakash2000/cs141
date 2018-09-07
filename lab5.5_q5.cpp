#include<iostream>
using namespace std;
int main(){
    int n,i,j;            // declaring variables
    cout<<" enter the size of pattern "<<endl;       //asking user for pattern
    cin>> n;
    for (i=1;i<=n;i++){                              // condition for printing stars in a row

        cout<<endl;
         for(j=1;j<=n-i;j++) {                         // condition for printing stars in a column

        cout<< "*"; }


    }                                                // finally this gives a pattern of square

return 0;
}
