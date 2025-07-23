// Print sum from 1 to n  ( parameterised )
#include<iostream>
using namespace std ;
void printsum( int n , int i ){
    // Base case 
    if ( n == 0 ){
        cout << i ;
        return ;
    }
    // calling
    printsum( n-1 , i+n ) ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    printsum(n,0) ;
}
