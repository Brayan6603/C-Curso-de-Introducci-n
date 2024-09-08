#include <iostream>

using namespace std;
void tabla(int profes[],int alumnos[],int P,int N){
   
    for(int i=0;i<P;i++){
        int cont=0;
        for(int j=0;j<N;j++){
            if(profes[i]==alumnos[j]){
                cont++;
            }
            
        }
        cout<<profes[i]<<"-"<<cont<<endl;
    }
}

int main()
{
    int P,N;
    cin>>P>>N;
    int profes[P];
    int alumnos[N];
    
    for(int i = 0; i<P; i++){
        profes[i]=i+1;
    }
    for(int i = 0; i<N; i++){
        cin>>alumnos[i];
    } 
    
    tabla(profes,alumnos,P,N);

    return 0;
}