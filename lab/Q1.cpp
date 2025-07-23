#include<iostream>
using namespace std ;
int main(){
    cout << " conversion code 1 is for addition " << endl ;
    cout << " conversion code 2 is for subtraction  " << endl ;
    cout << " conversion code 3 is for division " << endl ;
    cout << " conversion code 4 is for multiplication " << endl ;
    
    

    cout << " Enter your conversion code : " ;
    int s ;
    cin >> s ;
    cout << " Enter your number : " ;
    float n ;
    cin >> n ;
    cout << " Enetr your 2nd number : " ;
    float m ;
    cin >> m ;
    if ( s == 1 ) cout << n+m ;
    if ( s == 2 ) cout << n-m ;
    if ( s == 3 ) cout << n/m ;
    if ( s == 4 ) cout << n*m ;
}