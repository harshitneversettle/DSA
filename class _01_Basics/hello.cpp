#include<iostream>
using namespace std ;
int main(){
    long n ;
    cout << " enter a number : " ;
    cin >> n ;
    if( n < 0 ){
        n = -n ;
    }
    cout << n ;
}