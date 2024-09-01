#include <algorithm>
#include <iostream>
using namespace std;
 
int gcd(int n, int m){
    while (n != 0)
	{
        int t = m % n;
        m = n;
	    n = t;
	}
      return m;
    }

int main()
{
    int a = 98, b = 56;
    cout << "The gcd of a and b is " << gcd(a, b) << endl;
}