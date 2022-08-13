#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int A[3];
  int index = 1;

  for (int element : A)
  {
    cout << index++ << ". " << element << endl;
  }

  return 0;
}
