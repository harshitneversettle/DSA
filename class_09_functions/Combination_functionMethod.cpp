#include<iostream>
using namespace std;

int factorial( int x ){
    int f = 1 ;
    for ( int i = 1 ; i <= x ; i++ ){
    f = f * i ;
    }
    return f ;
}

int main(){
    cout << " Enter n : " ;
    int n ; 
    cin >> n ;
    cout << " Enter r :" ;
    int r ;
    cin >> r ; 
    int s = n - r ; 
    int nfact = factorial (n);
    int rfact = factorial(r) ;
    int nrfact = factorial(s);

    int combination = nfact/(rfact*nrfact);
    cout << combination <<endl ;


    
}
