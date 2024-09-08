#include <iostream>
using namespace std;
int main() {
  double A,B,C;
  cin>>A>>B>>C;
  if(B==0.0){
    cout<< "indefinido"<<endl;
    return 0;
  }

  double mas=A/B+C;
  double menos=A/B-C;

  if(mas==menos){
    cout<<mas<<endl;

  }
  else{
    cout<<mas<<" "<<menos<<endl;

  }
  return 0;
}
