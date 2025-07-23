// Print sum from 1 to n ( Return type ) vvi
#include<iostream>
using namespace std ;
int printsum( int n ){
    if ( n == 0 ) return 0 ;
    return n + printsum(n-1) ;

}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    cout << printsum( n ) ;
}