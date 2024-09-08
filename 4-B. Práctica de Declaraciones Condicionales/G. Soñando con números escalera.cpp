#include <iostream>
using namespace std;
int main() {
    int N,A,B;

    cin>>N>>A>>B;

    if(N==1 || N==121 || N==12321 || N==1234321 || N==123454321 ){
      cout<<"es escalera inicialmente"<<endl;
      return 0;
    }
    
    N-=A;
    N/=(B+1);

    if(N==1 || N==121 || N==12321 || N==1234321 || N==123454321 ){
      cout<<"es escalera despues del primer intento"<<endl;
      return 0;
    }

    
    N-=(A+B);
    N+=1;
    if(N==1 || N==121 || N==12321 || N==1234321 || N==123454321 ){
      cout<<"es escalera despues del segundo intento"<<endl;
      return 0;
    }
    else{cout<<"nos rendimos"<<endl;
    return 0;}


  
}