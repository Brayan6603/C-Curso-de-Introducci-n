#include <iostream>
using namespace std;
int main() {
  int N;
  cin>>N;
  int renglones=(N+1)/2;
  for(int renglon=1; renglon <=renglones;renglon++){
    int espacios=renglones-renglon;
    for(int i=0; i<espacios;i++)
      cout<<" ";

    int arroba = 2*renglon-1;

    for(int i=0; i<arroba; i++)
      cout<<"@";

    cout<<endl;
  }
 



  return 0;
}