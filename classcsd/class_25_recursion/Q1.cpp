// Print GOODMORNING n number of times where n is taken from user 
#include<iostream>
using namespace std ;
int greet(int x ){
    if ( x == 0 ) return 0 ;
    cout << " Good morning " << endl;
    greet(x-1) ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    greet(n) ;
}