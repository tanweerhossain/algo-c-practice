#include <iostream>

using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

int main(int argc, char const *argv[])
{
  Rectangle r = {10, 5};

  cout << r.length << "cm X " << r.breadth << "cm" << endl;

  Rectangle *pointer = &r;

  pointer->length = 20;
  pointer->breadth = 15;

  cout << r.length << "cm X " << r.breadth << "cm" << endl;

  Rectangle *ptr2 = (Rectangle *)malloc(sizeof(Rectangle));

  ptr2->length = 40;
  ptr2->breadth = 35;

  cout << ptr2->length << "cm X " << ptr2->breadth << "cm" << endl;

  Rectangle *ptr3 = new Rectangle;

  ptr3->length = 41;
  ptr3->breadth = 36;

  cout << ptr3->length << "cm X " << ptr3->breadth << "cm" << endl;

  return 0;
}
