
//this is a library
#include<iostream>
using namespace std;
int main(){
	int a,b,c ;				// declaring variables
	cout<<" enter  first number"<< endl;    // asking user for taking the first number
	cin>>a;
	cout<<" enter second number"<< endl;    // asking user for taking the second number
	cin>>b;
        cout<<" enter third number"<< endl;     // asking user for taking the third number
        cin>>c;
	
	if (a>b && a>c){           
                   cout<<" The greatest number is :"<< a<< endl;
		}
	
        else if (b>c && b>a){

		   cout<<" The greatest number is :"<< b<< endl;
 	        }

	else  {
               

           		cout<<" The greatest number is :"<< c<< endl;
 	        }
return 0;
}
