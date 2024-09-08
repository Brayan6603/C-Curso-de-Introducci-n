#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    
    int pos1=0,pos2=0,maxDist =0;
    
    for(int m=1;m<=T;m++){
        int vel1,vel2;
        cin>>vel1>>vel2;
        
        int npos1=pos1+vel1;
        int npos2=pos2+vel2;
        
        int nuevaDistancia =npos2-npos1;
        
        if(nuevaDistancia<0)
            nuevaDistancia*=-1;
            
        if(nuevaDistancia>maxDist)
                maxDist=nuevaDistancia;
                
        
        if(npos1==npos2 && pos1!=pos2)
            cout<<"Al minuto "<<m<<" los caballos van empatados" <<endl;
        
        if(npos1>npos2 && pos1<=pos2)
            cout<<"Al minuto "<<m<<" el caballo 1 toma la delantera" <<endl;
        if(npos2>npos1 && pos2<=pos1)
            cout<<"Al minuto "<<m<<" el caballo 2 toma la delantera" <<endl;
        
        pos1=npos1;
        pos2=npos2;
        
        
    }
    
    if(pos1==pos2)
        cout<<"Termina la carrera y empatan los caballos"<<endl;
    
    else
        cout<<"Termina la carrera y gana el caballo "<<((pos1>pos2)? 1:2)<<endl;
    
    
    cout<<"La distancia maxima entre los caballos fue de "<<maxDist;
    
    return 0;
}