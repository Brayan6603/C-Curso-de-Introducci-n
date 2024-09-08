#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double x;
  double y;
  double z;
  double pi = 3.1416;

  cin >> x >> y >> z;

  cout << ((x+(x)*(y+pow(z,2)))/((x + pi)*(y + pi))) << endl;

  return 0;
}