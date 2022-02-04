#include <iostream>
using namespace std;

int main() {
  int n,i=2;
  cout << "enter N" << endl;
  cin >> n;
  while (i<n)
    {
      if(n%i == 0)
      {
        cout<< n << " is not prime num" << endl;
      }
      else
      {
        i=i+1;
      }
    }
  cout << n << " is prime number"<< endl;
}