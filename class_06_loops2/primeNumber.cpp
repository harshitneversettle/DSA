#include<iostream>
using namespace std;
int main(){ 
    cout << " Enter a number :" ;
    int n ;
    cin >> n ;
        if ( n == 1 ) cout << n << " is neither prime nor composite " ;
        if ( n == 2 ) cout << n << " is a prime number ";

    for ( int i = 2 ; i <= n-1 ; i++ ){
        if ( n % i != 0 ) cout << n << " is a prime number " <<endl;
        else cout << n << " is a composite number " <<endl;
        break ;
    }
}