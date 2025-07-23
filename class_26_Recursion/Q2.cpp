// Stair path 
// 1 2 or 3 steps are allowed 
#include<iostream>
using namespace std ;
int stair(int n){
    if( n == 2 ) return 2 ;   // BAse case 
    if( n == 1 ) return 1 ;
    if ( n == 3 ) return 4 ;
    return stair(n-1) + stair(n-2) + stair(n-3) ;
}
int main(){
    cout << " enter a number : " ;
    int n ;
    cin >> n ;
    cout << stair(n) ;
}