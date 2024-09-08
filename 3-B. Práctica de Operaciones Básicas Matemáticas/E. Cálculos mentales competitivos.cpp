#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  double R;

  cin >> R;

  double A = R+5;

  double B = pow(A,2);

  double C = (B/(R/3));

  double D = pow(C,3);

  cout << fixed << setprecision(6) << R << endl; 
  cout << fixed << setprecision(6) << A << endl;
  cout << fixed << setprecision(6) << B << endl;
  cout << fixed << setprecision(6) << C << endl; 
  cout << fixed << setprecision(6) << D;

  return 0;
}