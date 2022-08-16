#include <iostream>

using namespace std;

void method1(int A[])
{
  cout
      << "method1(): "
      << sizeof(A)
      << "<size of pointer>"
      << endl;
}

void method2(int *A)
{
  cout
      << "method2(): "
      << sizeof(A)
      << "<size of pointer>"
      << endl;
}

int main(int argc, char const *argv[])
{
  int A[] = {1, 2, 3};

  cout
      << "main(): "
      << sizeof(A)
      << "<3 * "
      << sizeof(int)
      << "= >"
      << endl;

  method1(A);
  method2(A);

  return 0;
}
