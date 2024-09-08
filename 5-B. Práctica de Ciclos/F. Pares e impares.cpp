#include <iostream>

using namespace std;

int main()
{
    int N,M,pares=0,impares=0,i=1;
    cin>>N;
    while(i<=N){
        cin>>M;
        
        if(M%2==0)
            pares++;
        else
            impares++;
        
        i++;
        
    }
    
    cout<<pares<<" "<<impares<<endl;
    return 0;
}