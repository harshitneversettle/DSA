// Print name N times using recursion 
#include<iostream>
using namespace std ;
int print(int n , int count ){
    if ( n == count  ) return 0 ;
    cout << " Striver " ;
    count++ ;
    print(n,count) ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    print(n,0) ;
}