// Create a class named Box which will have three private memebers length, breadth and height.

// 1. Provide default and parameterized constructors for the class.
// 2. Create a public member function getVolume which will calculate the volume of the box.
// 3. Create getters and setters for each of the attribute of the class and also a member function to print the dimensions of the object.
// 4. Overload following operators with reference to volume of a box
//    a. >
//    b. <
//    c. <=
//    d. >=
//    e. ==

#include <iostream>
using namespace std;

class Box
{
private:
   double length;
   double breadth;
   double height;

public:
   double getVolume(void)
   {
      return length * breadth * height;
   }
   double getLength(){
      cin >> length;
      return length;
   }
   void setLength(double l)
   {
      length = l;
   }

   double getBreadth(){
      cin >> breadth;
      return breadth;
   }
   void setBreadth(double b)
   {
      breadth = b;
   }

   double getHeight(){
      cin >> height;
      return height;
   }
   void setHeight(double h)
   {
      height = h;
   }

   Box()
   {
      length = 0;
      breadth = 0;
      height = 0;
   }
   Box(double l, double b, double h)
   {
      length = l;
      breadth = b;
      height = h;
   }

   int operator>(Box b)
   {
      if (getVolume() > b.getVolume())
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   int operator<(Box b)
   {
      if (getVolume() < b.getVolume())
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   int operator>=(Box b)
   {
      if (getVolume() >= b.getVolume())
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   int operator<=(Box b)
   {
      if (getVolume() <= b.getVolume())
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   int operator==(Box b)
   {
      if (getVolume() == b.getVolume())
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
};

int main()
{
   Box Box1;
   Box Box2;
   double l1, b1, h1, l2, b2, h2;  

   cout << "Enter the Length for Box1: " << endl;
   l1=Box1.getLength(), Box1.setLength(l1);
   cout << "Enter the Breadth for Box1: " << endl;
   b1=Box1.getBreadth(), Box1.setBreadth(b1);
   cout << "Enter the Height for Box1: " << endl;
   h1=Box1.getHeight(), Box1.setHeight(h1);

   cout << "Enter the Length for Box2: " << endl;
   l2=Box2.getLength(), Box2.setLength(l2);
   cout << "Enter the Breadth for Box2: " << endl;
   b2=Box2.getBreadth(), Box2.setBreadth(b2);
   cout << "Enter the Height for Box2: " << endl;
   h2=Box2.getHeight(), Box2.setHeight(h2);

   if (Box1.getVolume() > Box2.getVolume())
   {
      cout << "Volume of Box1 is greater than Box2." << endl;
   }
   else if (Box1.getVolume() < Box2.getVolume())
   {
      cout << "Volume of Box2 is greater than Box1." << endl;
   }
   else if (Box1.getVolume() >= Box2.getVolume())
   {
      cout << "Volume of Box1 is greater than or equal to Box2." << endl;
   }
   else if (Box1.getVolume() <= Box2.getVolume())
   {
      cout << "Volume of Box2 is greater than or equal to Box1." << endl;
   }
   else if (Box1.getVolume() == Box2.getVolume())
   {
      cout << "Volume of Box1 is equal to Box2." << endl;
   }
   else
   {
      cout << "Can't process your input." << endl;
   }

   return 0;
}