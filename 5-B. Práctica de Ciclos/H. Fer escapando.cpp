#include <iostream>
using namespace std;
int main() {
  int tiempo, robot,fer, vel=0;
  cin >>tiempo>>robot>>fer;
  int a = 0, b= 1, c=1;

  for(int i=1;i<=tiempo;i++){
      int salto;
      cin>>salto;
      robot+=salto;
      
      int distancia = (robot + 1 -fer),nuevaVel = distancia/i;
      if (distancia%i) nuevaVel++;
      if (nuevaVel>vel) vel=nuevaVel;
    
  } 
  
  cout << vel <<endl;
 

  return 0;
}