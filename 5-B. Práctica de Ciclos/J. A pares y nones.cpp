#include <iostream>
using namespace std;
int main() {
  int cartas;
  cin>>cartas;
  
  int sumaPares=0,sumaImpares=0,cantidadPares=0,cantidadImpares=0;
  
  for(int i=0,carta;i<cartas;i++){
      cin>>carta;
      
      if(carta%2==0){
          sumaPares+=carta;
          cantidadPares++;
      }
      else{
          sumaImpares+=carta;
          cantidadImpares++;
      }
      
      
  }
  
  if(sumaImpares*cantidadPares==sumaPares*cantidadImpares){
      cout << "EMPATE!" << endl;
  }
  else if(sumaImpares*cantidadPares>sumaPares*cantidadImpares){
      cout << "NONILA" << endl;
  } else{
      cout << "APARICIO" << endl;
  }
 

  return 0;
}