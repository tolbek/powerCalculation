#include <iostream>
using namespace std;

long power(int z, usigned n)
{
  long long power = 1;

  for (int i = 0; i < z; i++)
  {
    power = power * z;
  }
  return power;
}

int main()
{
  int z = 2;
  unsigned n = 3;

  int result = power(z, n);
  cout<<result<<"\n";

  return 0;
}
