#include <iostream>
#include <cmath>
using namespace std;
int main() {

  double x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  double l1,l2,l3,l4;
  l1 = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
  l2 = sqrt((pow((x3-x2),2))+(pow((y3-y2),2)));
  l3 = sqrt((pow((x4-x3),2))+(pow((y4-y3),2)));
  l4 = sqrt((pow((x1-x4),2))+(pow((y1-y4),2)));


    
  if(l1<l2 && l1<l3 &&l1<l4){cout << l1 <<endl;} 
  else if(l2<l1 && l2<l3 &&l2<l4){cout << l2 <<endl;}
  else if(l3<l1 && l3<l2 &&l3<l4){cout << l3 <<endl;}
  else if(l4<l1 && l4<l3 &&l4<l2){cout << l4 <<endl;} 
  return 0;
}