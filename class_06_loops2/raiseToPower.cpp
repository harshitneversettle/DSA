// Two numbers are entered through the keyboard. write a program to find the value of one number raised to another .

#include<iostream>
using namespace std;
int main(){
    cout << " Enter first number : ";
    int n ;
    cin >> n ;
    cout << " Enter second number : ";
    int m ;
    cin >> m ;
    int power = 1 ;
    for( int i = 1 ; i <= m ; i++ ){
        power = power * n ;
    }
    if ( n == 0 && m == 0 ) cout << " Indeterminant form " <<endl;
     else cout << power <<endl ;
}