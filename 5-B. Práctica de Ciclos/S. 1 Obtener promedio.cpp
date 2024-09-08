#include <iostream>

#include <iomanip>
using namespace std;

int main()
{   int N,C,sc=0;
  
    cin>>N;
    
    
    for(int i=0; i<N ;i++){
        cin>>C;
        sc+=C;
    }
    
    cout << fixed<<setprecision(2)<< float(sc)/float(N) <<endl;
    

    return 0;
}