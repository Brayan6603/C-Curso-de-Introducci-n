#include <iostream>

using namespace std;

int main()
{
    int N,sum=0;
    cin>>N;
    
    while(N>0){
        int cif = N%10;
        sum+=cif;
        N/=10;
    }
    cout<<sum<<endl;

    return 0;
}