#include<iostream>
using namespace std ;
int main(){
    cout << " Enetr 1st number : " ;
    int n ;
    cin >> n ;
    cout << " enter 2nd number : " ;
    int m  ;
    cin >> m ;
    n = n + m ;
    m = n-m ;
    n = n - m ;
    cout << n << " " << m ;
}