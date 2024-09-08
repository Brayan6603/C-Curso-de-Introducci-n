#include <iostream>
using namespace std;
int main() {
  int N,cont=0;
  cin>>N;
  int M=N;
  while(N>1){
    if(N%2==0)
      N/=2;
    else
      N=(3*N)+1;

    if(N>M)
      M=N;

    cont++;


    
  }

  cout<<cont<<" "<<M<<endl;

  return 0;
}