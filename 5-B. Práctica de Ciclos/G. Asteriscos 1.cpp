#include <iostream>

using namespace std;

int main()
{   
    int N,M;
    cin>>N>>M;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
        {
           cout<<"\*"; 
        }
         cout<<endl;
    }
    
    return 0;
}