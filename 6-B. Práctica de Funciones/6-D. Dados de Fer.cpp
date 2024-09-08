#include <iostream>
using namespace std;
int resultadoActual=0;
void printResult(int D,int N){
  if(N==0){
    cout<<resultadoActual<<endl;
    return;
  }

  int pos =1;
  for(int i=0;i<N-1;i++)
      pos*=10;
  
  for(int i=1; i<=D; i++){
    resultadoActual+=i*pos;
    printResult(D,N-1);
    resultadoActual-=i*pos;

  }



  
  

  
}
int main() {
    int D,N;
    cin>>D>>N;

    printResult(D,N);

  return 0;
}