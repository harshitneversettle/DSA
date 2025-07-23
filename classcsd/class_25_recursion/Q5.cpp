// Base case --> calling --> kaam 

#include<iostream>
using namespace std ;
void print( int n ){
    // Base case 
    if ( n == 0 ) return ;
    // calling 
    print(n-1) ;
    // kaam 
    cout << n << " " ;
    return ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    print(n) ;
}