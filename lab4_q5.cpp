
//This a library 
#include <iostream>
using namespace std;
int main()
{
double angle_a,angle_b,angle_c;       //Declaring  variables

cout << "Enter one angle"<<endl;   //Asking for one of the angles of triangle
cin >> angle_a;
cout<< "Enter the other angle"<<endl;    //Asking for the second angle of the triangle
cin >> angle_b;

angle_c=180-(angle_a + angle_b);     //Calculating the third angle
 
cout<<"The third angle = "<<angle_c<< endl;      // Printing the value of the third angle
return 0;
}
