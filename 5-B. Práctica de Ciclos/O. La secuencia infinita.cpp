#include <iostream>
using namespace std;
int main() {
  int N;
  cin>>N;

  for(int i=0; i<N; i++){
    int id=i%8;

    if(id<=4) 
      cout<<(id+1)<<" ";
    else
      cout<<(9-id)<<" ";

  }

  return 0;
}