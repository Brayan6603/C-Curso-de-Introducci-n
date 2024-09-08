#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,a4;
    int df1,df2,df3,df4;
    
    cin>>a1>>a2>>a3>>a4;
    
    if((a1%4==0 & a1%100!=0)||(a1%400==0)){df1 = 29;}
    else{df1=28;}
    
    if((a2%4==0 & a2%100!=0)||(a2%400==0)){df2 = 29;}
    else{df2=28;}
    
    if((a3%4==0 & a3%100!=0)||(a3%400==0)){df3 = 29;}
    else{df3=28;}
    
    if((a4%4==0 & a4%100!=0)||(a4%400==0)){df4 = 29;}
    else{df4=28;}
    
    
    cout << df1<<" " << df2 <<" " <<df3 <<" " <<df4 << endl;
    return 0;
}