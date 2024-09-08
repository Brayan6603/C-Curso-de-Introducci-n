#include <iostream>
using namespace std;

void binar(int n,int bits){
  if(bits==0)
    return;
  char lastBin = n%2 ? 'X' : 'A';
  binar(n/2,bits-1);
  cout<<lastBin;

}
int main() {
  int n,res=1;
  cin>>n;

  for(int i=0; i<n;i++){
    res*=2;
  }

  for(int i =0;i<res;i++){
    binar(i,n);
    cout<<"\n";
  }
  

  return 0;
}