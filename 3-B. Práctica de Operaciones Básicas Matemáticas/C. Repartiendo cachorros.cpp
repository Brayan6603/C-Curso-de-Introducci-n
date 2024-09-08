#include <iostream>
using namespace std;
int main() {
  int c,p,h;
  cin >> c >> p >> h;
  int q = p;
  c -= p;
  q +=c%(h+1); 
  cout << q << endl;
  return 0;
}