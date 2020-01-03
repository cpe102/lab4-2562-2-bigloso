#include<iostream>
#include <cmath>

using namespace std;

float findDistance(float u,float a,float t){
float s ;
s=u*t+0.5*a*pow(t,2);
return s;
 } 

int main(){
  cout << "s =" << findDistance(1.5,-1,2) ;

  

  return 0;
}
