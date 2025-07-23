// Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std ;
int odd(int n , int m ){
    for ( int i = min(n,m) ; i <=max(n,m) ; i++ ){
        if ( i % 2 != 0 ) cout << i <<endl;
    }
    
}

int main(){
    cout << " Enter 1st number :  ";
    int n ;
    cin >> n ; 
    cout << " Enter 2nd number : " ;
    int m ;
    cin >> m ; 
    cout << odd(n,m) <<endl;

}