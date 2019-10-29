#include <iostream>
#include <string>
using namespace std;

int gcd(int m, int n);

int main ()
{

  int m, n;

  cout << "Enter m: ";
  cin >> m;
  cout << "Enter n: ";
  cin >> n;

  cout << "GCD is: " << gcd(m,n) << endl;

  return 0;
}

int gcd(int m, int n)
{
  if ((m <= 0) || (n <= 0) || (m <= 0 && n <= 0))
    return 0;
  else if (((m%n) == 0) || ((n%m) == 0)) 
    {
      if (m > n)
	return n;
      else if (n > m)
	return m;
    }
  else if (m > n)
    return gcd(n, m%n);
  else if (n > m)
    return gcd(m, n%m);
    
}
