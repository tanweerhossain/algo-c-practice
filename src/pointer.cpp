#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10;
  int *pointer = &a;

  cout << *pointer;

  int A[] = {1, 2, 3};
  int *pointerA = A;

  cout << pointerA[0] << " " << sizeof(pointerA) / sizeof(int);

  return 0;
}
