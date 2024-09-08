#include <iostream>
using namespace std;
int main() {
  int x,y,z;
  cin>>x>>y>>z;

  if(x==y && y==z){
    cout<<"equilatero"<<endl;
  }

  if(x!=y && y!=z && z!=x){
    cout<<"escaleno"<<endl;
  }

  if((x==y && z!=x)||(z==x && y!=z)||(z==y && x!=z)){
    cout<<"isosceles"<<endl;
  }                                                           

  return 0;
}