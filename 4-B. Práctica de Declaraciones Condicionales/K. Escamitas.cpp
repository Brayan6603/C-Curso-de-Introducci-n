#include <iostream>
using namespace std;
int main() {
  int t;
  cin>>t;

  if(t<15){cout<<"fria! RIP escamitas :("<<endl; }
  else if(t>=15 && t<21){cout<<"fria!"<<endl;}
  else if(t>=21 && t<=29){cout<<"tibia"<<endl;}
  else if(t>29 && t<=34){cout<<"caliente!"<<endl;}
  else if(t>34){cout<<"caliente! RIP escamitas :("<<endl;}
  
  return 0;
}