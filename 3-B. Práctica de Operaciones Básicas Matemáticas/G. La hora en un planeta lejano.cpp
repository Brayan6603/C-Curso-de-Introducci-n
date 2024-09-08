#include <iostream>
using namespace std;
int main() {
  int S,s,m,h,d;
  cin >> S;

  s = S%50,S/=50;
  m = S%70,S/=70;
  h= S%12, S/=12;
  d = S;

  cout << d <<" " << h <<" " << m <<" " << s <<" " <<endl;

  return 0;
}