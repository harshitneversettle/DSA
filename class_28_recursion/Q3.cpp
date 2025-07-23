// GCD using recursion     Time complexity of ( n,m ) == O(log(n+m)) l ;
// HCF(a,b) == HCF(b%a , a)   if HCF(0,a) then a will be our ans ;

#include<iostream>
using namespace std ; 
int gcd( int n , int m ){
    if ( n == 0 ) return m  ;
   // if ( n == 0 ) return ;
    else return gcd(m%n , n ) ;
}
int main(){
    int n = 25 ;
    int m = 100 ;
    cout << gcd( n , m ) ;
}