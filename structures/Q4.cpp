#include<iostream>
using namespace std ;
int swap(int *n , int *m ){
    int a = *n ;
    int b = *m ;
    int temp = a ;
    a = b ;
    b = temp ;
    cout << a << " " << b ;
}
int main(){
    cout << " Enter 1st number : " ;
    int n ;
    cin >> n ;
    cout << " Enter 2nd number : " ;
    int m ;
    cin >> m ;
    swap(&n,&m) ;
    
}