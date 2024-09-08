#include <iostream>
using namespace std;
int main() {
  int N,cont=1;
  cin>>N;

  while(N>2){
    if(N%2==0){
      N/=2;

      cont++;
    }
    else{return 0;}
  }
  cout<<cont<<endl;
  return 0;
}