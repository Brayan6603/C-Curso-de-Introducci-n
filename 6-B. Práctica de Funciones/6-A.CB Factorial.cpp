#include <iostream>

using namespace std;

long long factorial(int N)
{
    
    if(N<=1)
        return 1;
        
    else    
        return (N*factorial(N-1));
    
    
}

int main()
{
    int N,Resultado;
    cin>>N;
    
    
    cout << factorial(N)<< endl;
    

    return 0;
}