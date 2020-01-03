#include<iostream>
#include <cmath>

using namespace std;
 findDivisor(int x){
     
     int i =2 ;
     while(i>0){
         if(x%i == 0){
             return i ;
         }
         else {
             i++ ;
         } 
     }
 }
int main(){
    int x ;
    cout << "input =" ;
    cin >> x ;
    cout << "outout ="<< findDivisor(x) ;
    return 0 ;

}