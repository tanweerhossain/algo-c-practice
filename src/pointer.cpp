#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int *pointer;
  int size = 5;

  pointer = new int[size];

  cout << sizeof(pointer);

  return 0;
}
