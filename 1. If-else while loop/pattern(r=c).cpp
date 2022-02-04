#include <iostream>
using namespace std;

int main() {
  int r,i=1;
  cout << "Enter the num of row" << endl;
  cin >> r;
  while (i<=r)
    {int c=1;
      while(c<=r){
        cout << "*";
        c=c+1;
      }
      cout << endl;
      i= i+1;
    }
}