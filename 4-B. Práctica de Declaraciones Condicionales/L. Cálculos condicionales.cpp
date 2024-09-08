#include <iostream>
using namespace std;
int main() {
    int N;
    int count=0;
    cin>>N;

    if(N%2==0) {
      N/=2;
      count++;
    }
    else {
      N++;
      count++;
      }

    if(N>99){
      N/=100;
      count++;
      }
    else if(N>9 && N<100) {
      N/=10;
      count++;
      }
    
    if(N%3==0){
      N--;
      count++;
      }

  
  cout<<N<<" "<<count<<endl;


  return 0;
}