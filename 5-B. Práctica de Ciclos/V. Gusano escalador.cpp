#include <iostream>

using namespace std;

int main()
{
    int restante, sube,baja;
    cin>>restante>>sube>>baja;
    
    int m=1;
    
    while(true){
        
        if(m%2){
        restante-=sube;
        if(restante<=0)
            break;
        }
        else{
            restante+=baja;
            
        }
        m++;
        
       
    }
    
    cout<<m<<endl;

    return 0;


}