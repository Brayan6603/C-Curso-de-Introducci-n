#include <iostream>
using namespace std;
int main() {
  int T,B;
  cin>>T>>B;
  int lT = (T/2)+T%2;
  
  T = T-lT;
  lT = lT+(T%(B-1));

  
    
    


  
  
  cout << lT << endl;

  

  return 0;
}