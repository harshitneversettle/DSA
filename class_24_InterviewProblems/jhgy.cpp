#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int n , save , rem , i ;
    cin >> n ;
    save = 0 ;
    i = 0 ;
    while(n> 0){
        rem = n%2 ;
        save += rem*pow(10,i) ;
        n = n/2 ;
        i++ ;
    }
    cout << save ;
}