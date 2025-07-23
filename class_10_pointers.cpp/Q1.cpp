// WAP to calculate the sum of two numbes using pointers 
#include<iostream>
using namespace std ; 
int main(){
    cout << " Enter 1st number : " ;
    int n ; 
    cin >> n ; 
    cout << " Enter 2nd number : " ;
    int m ; 
    cin >> m ; 
    int* p1 = &n ;
    int* p2 = &m ; 
    cout << *p1 + *p2 ; 

}