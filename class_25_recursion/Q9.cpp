// Multiple calls 
// WAP to calculate the nth fibonacci number using recursion 

#include<iostream>
using namespace std ;
int fibo(int n){
    if( n == 1 || n == 2 ) return 1 ;
    return fibo(n-1) + fibo(n-2) ;
}
int main(){
    cout << " Enter a number : ";
    int n ;
    cin >> n ;
    cout << fibo(n) ;
}