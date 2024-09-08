#include <iostream>
using namespace std;
int main() {
  int N,M,A=0;
  cin>>N;

  for(int i=1;i<=N;i++){
    cin>>M;
    if(M>A) A=M;

  }

  cout<<A<<endl;
  return 0;
}