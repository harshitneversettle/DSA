#include<iostream>
using namespace std ;
int main(){ 
    for( int i = 0 ; i <= 10 ; i++ ){
        if(i<4){ for( int j = 10 ; j<= i ; j++ ){
            cout << "*" ;
        }}
       else{for( int j = 10 ; j >= i ; j-- ){
            cout << "*" ;
        }
        cout << endl ;
    }}
    return 0 ;
}