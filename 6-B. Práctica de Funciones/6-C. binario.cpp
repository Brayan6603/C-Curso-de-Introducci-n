#include <iostream>
using namespace std;

void printBinary(int N){

  if(N==0)
    return;

  int ulbit = N%2;
  printBinary(N/2);

  cout<<ulbit<<" ";

  
}
int main() {
    int N;
    cin>>N;

    printBinary(N);

  return 0;
}