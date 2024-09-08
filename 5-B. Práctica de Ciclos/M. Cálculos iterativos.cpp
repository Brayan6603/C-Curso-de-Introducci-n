#include <iostream>
using namespace std;
int main() {
 int A,B,C,N=0;
 cin>>A>>B>>C;

for(int i=1; i<=A; i+=2)
    N+=i;
for(int i=1; i<=B; i*=2)
    N-=i;

while(N%C==0){
  N/=C;
}
  

cout<< N<<endl;

  return 0;
}