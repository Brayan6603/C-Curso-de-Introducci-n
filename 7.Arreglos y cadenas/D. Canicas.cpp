#include <iostream>
using namespace std;
int canicas[1000001];
int main() {
  int n,c;
  cin>>n>>c;
  int canicas[1000001];

  for(int i=1;i<=n;i++){
    canicas[i]=0;
  }

  for(int i=0;i<c;i++){
    int vaso;
    cin>>vaso;
    canicas[vaso]++;
  }

  for(int i=1;i<=n;i++){
    cout<<canicas[i]<<endl;
  }

  



  



  return 0;
}