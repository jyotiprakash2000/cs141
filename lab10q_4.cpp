#include <iostream>        //This is a library

using namespace std;       //name space

//  Declaration of class Point
// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point();

  // class constructor that sets the coordinates x, y to the values xval,yval
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively
  void Set_X(int xval);
  void Set_Y(int yval);


  void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};


// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and y coordinate by dy
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
}

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
}
//Defined print function

void Point::print()
{
        cout<<"("<<X<<","<<Y<<")"<<endl;
}



//  Declaration of class Rectangle


//class Point gets inherited publicly to class Rectangle
class Rectangle: public Point
{
	//point objects declared
	Point r1, r2, r3, r4;
	public:
		Rectangle(Point,Point);           //constructor
		Rectangle();                      //default constructor that builds a rectangle with coordinates (0,0), (0,1), (1,0), (1,1)

	private:
		int side1();                      //private member function to calculate the length of side
		int side2();

	public:
		int area();                       //member function to calculate the area of the rectangle
		int A,B;                        //variables to store length of sides

	int my_side1();                       //function to access returned data from private member functions side1

	int my_side2();	                      //function to access returned data from private member functions side2


};



Rectangle::Rectangle()
{
	//assigns default values to points p1,p2,p3,p4
	r1.Set_X(0);
	r1.Set_Y(0);

	r2.Set_X(0);
	r2.Set_Y(1);

	r3.Set_X(1);
	r3.Set_Y(1);

	r4.Set_X(1);
	r4.Set_Y(0);

	//displays these points
	cout<<"The coordinates are:"<<endl;
	cout<<"First point:"<<endl;
	r1.print();
	cout<<endl<<"Second point:"<<endl;
	r2.print();
	cout<<endl<<"Third point:"<<endl;
	r3.print();
	cout<<endl<<"Fourth point:"<<endl;
	r4.print();
	cout<<endl;
}

Rectangle::Rectangle(Point a, Point b)
{


	r1 = a;
	r3 = b;
	//assigns coordinate values for remaining points on the rectangle
	r2.Set_X(r1.Get_X());
	r2.Set_Y(r3.Get_Y());

	r4.Set_X(r3.Get_X());
	r4.Set_Y(r1.Get_Y());

	//displays the coordinates of the rectangle
	cout<<"Coordinates of first point: "<<endl;
    r1.print();
    cout<<endl;
    cout<<"Coordinates of second point: "<<endl;
	r2.print();
    cout<<endl;
    cout<<"Coordinates of third point: "<<endl;
    r3.print();
    cout<<endl;
	cout<<"Coordinates of fourth point: "<<endl;
	r4.print();
	cout<<endl;
}

int Rectangle::side1()                       //function definition of private member function side1()
{
	A = r2.Get_Y() - r1.Get_Y();

}

int Rectangle::side2()                       //function definition of private member function side2()
{
	B = r4.Get_X() - r1.Get_X();

}

int Rectangle::area()						 //function definition of public member function area()
{
	return A*B;
}

int Rectangle::my_side1()
{
	side1();
	return A;
}

int Rectangle::my_side2()
{
	side2();
	return B;
}



// Testing both the classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor
  Point x1;
  cout<< "The coordinates of x1 are: ";
  x1.print();
  cout<<endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point x2(2, 3);
  cout<< "The coordinates of x2 are: ";
  x2.print();

// Moving point x2 by (1, -1):
  x2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for x2 is " << x2.Get_X() << endl;
  cout<< "The y value for x2 is " << x2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points x1, x2:
  cout<< "The coordinates are ";
  x2.print();
  cout<<endl<<endl;


//asking the user for the two points using which the rectangle is to be made
  int xval,yval;                                         //variables for assigning coordinates to points p1 and p3
  cout<<"Enter coordinates of 1st point"<<endl;
  cout<<"Enter x coordinate: "<<endl;
  cin>>xval;
  cout<<endl;
  cout<<"Enter y coordinate: "<<endl;
  cin>>yval;
  Point p1(xval,yval);
  cout<<endl;
  cout<<"Enter coordinates of 2nd point"<<endl;
  cout<<"Enter x coordinate: "<<endl;
  cin>>xval;
  cout<<endl;
  cout<<"Enter y coordinate: "<<endl;
  cin>>yval;
  cout<<endl;
  Point p3(xval,yval);


//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:

  //Displays coordinates of rectangle ob1
  cout<<"Rectangle R1:"<<endl;
  Rectangle R1;


  //Displays coordinates of rectangle ob2
  cout<<"Rectangle R2:"<<endl;
  Rectangle R2(p1,p3);


  //displays the sides of the rectangle
  cout<<"The sides of the rectangle are: \n";
  cout<<R2.my_side1()<<" & "<<R2.my_side2()<<endl;

  //displays the area of the rectangle
  cout<<"The area of the rectangle: "<<R2.area();

  return 0;
}
