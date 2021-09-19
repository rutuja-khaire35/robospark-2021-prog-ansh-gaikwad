// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
// Use getter and setter functions for each attribute of the class.

#include <iostream>
using namespace std;
class Rectangle
{
	int length, breadth;
public:

    int getLength()
    { return length; }
    int getBreadth()
    { return breadth; }
    void set();
    void setLen(int length);
    void setDim(int length, int breadth);

	Rectangle(){} 
	Rectangle(int i){}
	Rectangle(int x, int y) {}
};

void Rectangle::set()
{
    length = breadth = 0;
}
void Rectangle::setLen(int x)
{
    length = breadth = x;
}
void Rectangle::setDim(int x, int y)
{
    length = x;
    breadth = y;
}

int getarea(Rectangle r) {
        int l, b;
        l = r.getLength();
        b = r.getBreadth();
        return l * b; }

int main()
{
	Rectangle r1;
    r1.set();
    cout << "Area of Rectangle r1 is: " << getarea(r1) << endl;

	Rectangle r2;
    r2.setLen(10);
    cout << "Area of Rectangle r2 is: " << getarea(r2) << endl;

	Rectangle r3;
    r3.setDim(15, 5);
    cout << "Area of Rectangle r3 is: " << getarea(r3) << endl;

	return 0;
}