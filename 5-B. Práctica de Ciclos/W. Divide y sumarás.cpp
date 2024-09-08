#include <iostream>
using namespace std;
int main() {
  int N;
  cin>>N;

  int p2=1;
  int sum=0;

  while(p2<=N){
    sum+=N/p2;
    p2*=2;
  }

  cout<<sum<<endl;

  return 0;
}