#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  double X;

  cin >> X;

  double Y = (X+5)/(2*X+2);

  double Z = (pow(Y,2)+X*(X-2*Y))/(X*Y);

  cout << fixed << setprecision(6) << Z;
  return 0;
}