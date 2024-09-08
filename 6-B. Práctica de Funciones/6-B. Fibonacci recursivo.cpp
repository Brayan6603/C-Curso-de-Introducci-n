#include <iostream>

using namespace std;
int cont=0;

long long fibo(int N)
{
    cont++;
    if(N==0)
        return 0;
        
    else if(N<=1)
        return 1;
        
        
    else    
        return (fibo(N-1)+fibo(N-2));
    
    
    
}

int main()
{
    int N;
    cin>>N;
    
    
    cout << fibo(N)<<" "<<cont<< endl;
    

    return 0;
}