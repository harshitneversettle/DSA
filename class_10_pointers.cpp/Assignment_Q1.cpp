// Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int product(int n , int m ){
    int s = n * m ;
   
    return s ;
}
int main(){
    cout << " Enter 1st number : " ;
    int n ; 
    cin >> n ; 
    cout << " Enter 2nd number : " ;
    int m ; 
    cin >> m ;
    int* ptr1 = &n ;
    int* ptr2 = &m ;
    cout << product( *ptr1 , *ptr2 ) <<endl ;

}