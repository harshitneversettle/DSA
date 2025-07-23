#include<iostream>
using namespace std ;
int main(){
    cout << " Enter temperature : " ;
    float n  ;
    cin >> n ;
    float c ;
    c = (n - 32) * (5/9) ; 
    cout << " Celsius = " << c << endl ;
    float k ;
    k = c + 273.15 ;
    cout << " Kelvin : " << k << endl ;
    
}