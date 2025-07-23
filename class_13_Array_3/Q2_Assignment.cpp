// Find the factorial of a large number 
#include<iostream>
using namespace std ;
int main(){
    cout << " Enter a large number : " ;
    long n ;
    cin >> n ;
    long factorial = n ;
    for ( int i = n-1 ; i >=1 ; i-- ){
        factorial = factorial * i ; 
    }
    cout << factorial ;
}