#include <iostream>
using namespace std;
int main() {
 int K,P=2;
 cin>>K;

 while(K){
   bool esPrimo=true;

   for(int i=2; i<P; i++){
     if(P%i==0){
       esPrimo=false;
     }
   }

   if(esPrimo) 
    K--;
  
  P++;
 }

cout<<(P-1)<<endl;
  return 0;
}