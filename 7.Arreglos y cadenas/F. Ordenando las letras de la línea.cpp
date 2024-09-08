#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    char cadena[105];
    cin.get(cadena,105);
    
    int longitud =strlen(cadena);
    
    int frec[26];
    
    for(int i=0;i<26; i++){
        frec[i]=0;
    }
    
    for(int i=0; i<longitud; i++){
        char c=cadena[i];
        if(isalpha(c)){
            frec[c-'a']++;
        }
        
    }
    
    int letraActual=0;
    
    for(int i=0; i<longitud;i++){
        char c = cadena[i];
        if(isalpha(c)){
            while(frec[letraActual]==0)
                letraActual++;
                
            cout<<(char)(letraActual+'a');
            frec[letraActual]--;
            
            
        }
        
        else{
            cout<<c;
        }
    }
    

    return 0;
}