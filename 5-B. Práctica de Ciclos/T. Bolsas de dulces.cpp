#include <iostream>

using namespace std;

int main()
{
    int V,Nb,Pu,T=0;
    cin >>V;
    
    for(int i=1;i<=V;i++){
        cin>>Nb>>Pu;
        T+=(Nb*Pu);
        
    }
    
    cout << T << endl;
}