#include <iostream>
using namespace std;
int main() {
  int N;
  cin >>N;
  int a = 0, b= 1, c=1;

  for(int i=1;i<N;i++){
    if(i<c){
    cout<<i<<" ";
    }
    else if(i==c){
    a=b, b=c, c=a+b;
    }
  } 
 

  return 0;
}