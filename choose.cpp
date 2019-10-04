#include <iostream>
using namespace std;

int choose (int N, int r);
{
  if (N==0)
    return 1;
  else
    return (N * choose(N-1))/(r * choose(r-1) * (n - r) * choose (n - r - 1));
}
