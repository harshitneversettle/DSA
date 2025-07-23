#include<iostream>
using namespace std ;
int main(){
    cout << " Enetr a number : " ;
    int n ;
    cin >> n ;
    if ( n == 0 ) cout << " zero " ;
    else if ( n > 0 ) cout << " positive " ;
    else cout << "negative" ;
}