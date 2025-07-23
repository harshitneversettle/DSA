// Make a functrion which calculate the factorial of n using recursion 

#include<iostream>
using namespace std ;
int fact(int x){ 
    if ( x == 0 || x == 1 ) return 1 ;
    return x*fact(x-1) ;
    
}
int main(){
    cout << " Enter a numebr : " ;
    int n ;
    cin >> n ;
    cout << fact( n ) ;
}