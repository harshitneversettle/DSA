// Print sum from 1 to n  ( parameterised )
#include<iostream>
using namespace std ;
void printsum( int n , int i ){
    // Base case 
    if ( n == 0 ) return ;
    // calling
    printsum( n-1 , i+n ) ;
    // kaam 
    cout << i << " " ;
    return ;

}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    printsum(n,0) ;
}
