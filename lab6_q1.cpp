//this is a library
#include<iostream>
using namespace std;

void userInput(int &unitCst,int &unit,float &taxRt) `           //call by reference
{
    cout<<"Enter the unit cost of the product"<<endl;           //Asking the user to input cost of one unit, number of units and the tax rate
    cin>>unitCst;
    cout<<"Enter the no of units"<<endl;
    cin >>unit;
    cout<<"Enter the tax rate"<<endl;
    cin>>taxRt;
}
void calculations(int &unitCst,int &unit,float &taxRt,float &salesTx,float &totDue)         //call by reference
{
    salesTx=(unitCst*unit*taxRt)/100;                                  //Calculating the sales tax and total due
    totDue=(unit*unitCst)+salesTx;
}
void readableOutput(int a,int b,int c,int d,int e)
{
   calculations(a,b,c,d,e);
   cout<<"The unit cost for the product is : "<<a<<endl;            //Displaying the details
   cout<<"The number of units is : "<<b<<endl;
   cout<<"The tax rate for the product is : "<<c<<endl;
   cout<<"The sales tax on products is : "<<d<<endl;
   cout<<"The total due is : "<<e<<endl;
}

int main()              //driver function
{

    int unitCost,unitsPurch,taxRate,salesTax,totalDue;
    userInput(unitCost,unitsPurch,taxRate);
    readableOutput(unitCost,unitsPurch,taxRate,salesTax,totalDue);
    return 0;
}
