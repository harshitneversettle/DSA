#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    cout << " Enter a numebr : " ;
    float n ;
    cin >> n ;
    float degree = n * (M_PI / 180.0) ;
    cout << sin(degree) << endl ;
    cout << tan(degree) << endl ;
    cout << cos(degree) ;
}