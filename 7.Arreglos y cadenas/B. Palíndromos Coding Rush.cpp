#include <iostream>
#include <cstring>
using namespace std;

bool isPol(char palabra[],int longitud){
    
    for(int i=0;i<longitud;i++){
        if(palabra[i] == palabra[longitud-1-i]){
            return true;
        }
        return false;
        
    }
    
    }

int main()
{
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        char palabra[1001];
        cin>>palabra;
        int longitud= strlen(palabra);
        
        cout<<(isPol(palabra,longitud) ? "P" : "NP")<<endl;
        
    }

    return 0;
}