#include <iostream>

using namespace std;


long long f(int N)
{
    
    if(N<=5)
        return 1;

    else    
        return (f(N-2)*5);
    
}

int main()
{
    int N;
    cin>>N;
    
    
    cout << f(N)<< endl;
    

    return 0;
}