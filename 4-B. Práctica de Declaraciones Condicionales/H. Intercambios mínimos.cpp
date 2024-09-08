#include <iostream>
using namespace std;
int main() {
  int a,b,c,res=0;
  cin >>a>>b>>c;

  if (a>b&&a>c){
    if(c>b)
      res=2;
    else
      res=1;
  } else if(a>b){
    res = 1;
  } else if(a>c){
    if(a==b)
      res=1;
    else 
      res=2;
  } else{
    if(b>c)
      res=1;
  }

  cout<< res<<endl;

  

  return 0;
}