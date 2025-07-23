// Write a programme to determine the digits of entered nuber 
// Hint : 1. Integer ki baat ho rhi hai 
//        2. entered integer ko 10 se divide kro ( isse 1 digit km ho jayegi )

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int i = 0 ;
    int a = n ;
    while ( n > 0 ){
        n = n / 10 ;
        i++ ;
    }
    if ( a == 0 ) cout << 1 <<endl;
    else cout << i << endl;

}