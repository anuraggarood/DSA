#include <iostream>
using namespace std;

int main() {
  int f,c;
  cout << "Enter the temperature in fahrenheit";
  cin >> f;
  c = 1.8*f + 32;
  cout << c << "celsius equal to " << f << "fahrenheit" << endl;
}