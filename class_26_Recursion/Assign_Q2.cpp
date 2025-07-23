// Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std ;
void reverse(int arr[] , int n , int i ){
    if ( n == i ) return ;     // Base case
    cout << arr[i] << " " << i << " " ;  // Kaam 
    reverse(arr , n , i+1 ) ;      // calling 
}
int main(){
    cout << " Enter a numeber : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    reverse( arr , n , 0 ) ;
}