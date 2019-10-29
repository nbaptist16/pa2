#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double series(int n);

int main ()
{
  int n;
  
  cout << "Enter n: ";
  cin >> n;

  cout << "Series(" << n << ") is: " << setprecision(5) << series(n) << endl;

  return 0;
}

double series(int n)
{
  if (n <= 0)
    return 0;
  else if (n == 1) //base case
    return 2.0/5.0;
  else
    return ((2.0*n)/((3.0*n)+2.0)) + series(n-1.0);
    //why did no one tell us that C++ is pickier than a hungry toddler that's fed brussel sprouts I tried writing the same thing with no decimals and it gave me 1.04545???
   }
