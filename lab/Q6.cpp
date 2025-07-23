#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    cout << " Enter perpendicular : " ;
    int p ;
    cin >> p ;
    cout << " Enter base : " ;
    int b ;
    cin >> b ;
    float h ;
    h = sqrt( (p*p) + (b*b) ) ;
    cout << h ;
}