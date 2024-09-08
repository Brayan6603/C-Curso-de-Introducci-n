#include <iostream>
using namespace std;

int main() {
  int num;
  string res;
  cin >> num;

  if(num%2==0){
      res="par";
    
  } 
  else { 
      res="impar"; 
  
     }
     
    cout <<res  <<endl;

  return 0;
}