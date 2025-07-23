#include<iostream>
using namespace std ;
int raise( int n , int m ){
    // Base case 
    if( m == 0 ) return 1;
    return n*raise(n , m-1 ) ;
}
int main(){
    cout << " Enetr a number : " ;
    int n ;
    cin >> n ;
    cout << " Enter the power : " ;
    int m ;
    cin >> m ;
    cout << raise(n , m ) ;
}