#include <iostream>
using namespace std;
#include "CHOOSE.h"

int choose(int N, int r);


int main ()
{
  
  char repeatyn = 'y';
 
  
  while (repeatyn == 'y')
    {
      cout << "How many coins would you like to flip? ";
      int N;
      cin >> N;
  
      cout << "How many heads do you want? ";
      int r;
      cin >> r;

      cout << "Flipping " << N << " coins, we can get " << r << " heads " << choose(N, r) << " ways." << endl;
      cout << "Flip again? (y/n) ";
      cin >> repeatyn;
    }
  
  return 0;

}

int choose (int N, int r)
{
  if (N==0)
    return 1;
  else
    return (N * choose(N-1))/(r * choose(r-1) * (n - r) * choose (n - r - 1));
}

