// WAP to calculate the sum of odd number b/w a and b ( insclusive ) using recursion 

#include<iostream>
using namespace std ;
int odd( int n , int m ){
    if ( n > m ) return 0 ;  // Base case 
    if (  n % 2 == 0 ) u
    odd( n+1 , m ) ;
}
int main(){
    cout << " Enetr a : " ;
    int n ;
    cin >> n ;
    cout << " Enter b : " ;
    int m ;
    cin >> m ;
    odd( n , m ) ;
}