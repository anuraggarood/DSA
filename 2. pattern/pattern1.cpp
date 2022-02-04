#include <iostream>
using namespace std;

int main() {
  int i=1,r;
  cout << "Enter the no. of row" << endl;
  cin >> r;
  while (i<=r)
    {
      int c=1;
      while(c<=r)
        {
          cout << c ;
          c= c+1;
        }
      cout << endl;
      i= i+1;
    }
}