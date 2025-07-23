// Find the HCF of two numbers         Hcf hamesha minimum of two number se chotta hi hoga isliye usko 1 condition consider



#include<iostream>
using namespace std ;
int hcf = 1  ;
int gcd( int n , int m ){
    for ( int i = 1 ; i <= min( n , m ) ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            if ( n % i == 0 && m % i == 0 ){
                hcf = i ;
                break ;
            }
        }
    }
    return hcf ;  
    

}

int main(){
    cout << " Enter 1st number : " ;
    int n ; 
    cin >> n ;
    cout << " Enter 2nd number : " ;
    int m ; 
    cin >> m ;
    
    cout << gcd( n , m ) ;

}