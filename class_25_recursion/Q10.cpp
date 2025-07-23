// Power function ( Logarithmic ) Time complexity == o(log n) 
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int power( int n ,int m ){
    if ( m == 1 ) return n ;
    int ans = power(n,m/2) ;
    if( m % 2 == 0 ) return ans*ans ;
    else if ( m % 2 != 0 ) return ans*ans*n ;
}
int main(){
    cout << " Enter base : " ;
    int n ;
    cin >> n ;
    cout << " Enter power : " ;
    int m ;
    cin >> m ;
    cout << power(n,m) ;

}