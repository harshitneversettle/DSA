//  Base case --> kaam --> calling 

#include<iostream>
using namespace std ;
int print(int n ){
    // Base case
    if ( n == 0 ) return 1 ;  
    // Kaam
    cout << n << " " ;  
    // Calling 
    print(n-1) ;     
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    print(n) ;
}