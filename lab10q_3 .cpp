#include <iostream>

using namespace std;

class Rectangle {
   public:
      double length;   // Length of a rectangle
      double breadth;  // Breadth of a rectangle
                //Member function declaration
      double area(void);
      double perimeter(void);
};

//Member function definition
double Rectangle::area(void){
    return length*breadth;
}

double Rectangle::perimeter(void){
    return 2*(length + breadth);

}

//Main function for the program
int main(){
    double r,j;
    Rectangle rect1;           //Declaring rectangles of rectangle class
    Rectangle rect2;
    double A1=0.0;               //Initializing all the variables
    double P1=0.0;
    double A2=0.0;
    double P2=0.0;
    cout<<"Enter the length of Rectangle 1"<<endl;    //Asking the user to enter both length and breath of  the rectangles
    cin>>rect1.length;
    cout<<"Enter the breadth of rectangle 1"<<endl;
    cin>>rect1.breadth;
    cout<<"Enter the length of Rectangle 2"<<endl;
    cin>>rect2.length;
    cout<<"Enter the breadth of rectangle 2"<<endl;
    cin>>rect2.breadth;
    A1=rect1.area();       //Defining the area and perimeter of rectangle1
    P1=rect1.perimeter();
    A2=rect2.area();       //Defining the area and perimeter of rectangle2
    P2=rect2.perimeter();
    if (A1>A2)                //Defining conditions for comparing the area and perimeter between two triangle
        cout<<"Area of rectangle 1 is bigger than rectangle 2 which is equal to : "<<A1<<endl;
    if (A2>A1)
        cout<<"Area of rectangle 2 is bigger than rectangle 1 which is equal to : "<<A2<<endl;
    if (P1>P2)
        cout<<"Perimeter of rectangle 1 is bigger than 2 which is equal to :  "<<P1<<endl;
    if (P2>P1)
        cout<<"Perimeter of rectangle 2 is bigger than 1 which is equal to : "<<P2<<endl;
    if(A1==A2)
        cout<<"Area of rectangle 1 is equal to area of rectangle 2 which is : "<<A2<<endl;
    if(P1==P2)
        cout<<"Perimeter of rectangle 1 is equal to perimeter of rectangle 2 which is : "<<P2<<endl;
    return 0;
}


