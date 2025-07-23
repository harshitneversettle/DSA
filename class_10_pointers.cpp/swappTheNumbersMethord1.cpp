// Swap two numbers 
#include<iostream>
using namespace std ;
int main(){
    cout << " Enter 1st number : " ;
    int n ; 
    cin >> n ; 
    cout << " enter 2nd number : " ;
    int m ; 
    cin >> m ; 
    cout << n << " " << m <<endl;
    int *p1 = &n ;
    int *p2 = &m ;
    int temp = *p1 ; 
    *p1 = *p2 ; 
    *p2 = temp ; 
    cout << *p1 << " " << *p2 <<endl ;  
}