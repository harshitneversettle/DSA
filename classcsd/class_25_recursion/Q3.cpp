// Print 1 to n with extra parameter 
#include<iostream> 
using namespace std ;
int print( int i , int n ){
    if ( n < i ) return 1 ;
    cout << i << endl ;
    print( i+1 , n ) ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    print(1 , n ) ;
}