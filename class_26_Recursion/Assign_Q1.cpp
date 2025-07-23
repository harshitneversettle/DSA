// Print all the elements of an array in reverse order.

#include<iostream>
using namespace std ;
void reverse(int arr[] , int n  ){
    if ( n == 0 ) return ;     // Base case
    cout << arr[n-1] << " " ;  // Kaam 
    reverse(arr , n-1 ) ;      // calling 
}
int main(){
    cout << " Enter a numeber : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    reverse( arr , n  ) ;
}