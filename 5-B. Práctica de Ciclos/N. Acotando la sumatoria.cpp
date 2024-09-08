#include <iostream>

using namespace std;

int main()
{
    int N,K=0,suma=0;
    
    cin>>N;
    
    while(suma<N){
        K++,suma+=K+7;
    }
    cout<<K<<endl;
    return 0;
}