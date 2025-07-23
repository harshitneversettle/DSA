// Reverse an array using recursiopon 
#include<iostream>
using namespace std ;
int rev(int arr[] , int i , int j ){
    if ( i >= j ) return 1 ;
    swap(arr[i] , arr[j] ) ;    // kaam 
    rev(arr , i+1 , j-1 ) ;  // function calling 
}
int main(){
    cout << " Enter size of array : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    int i = 0 ;
    int j = n-1 ;
    rev(arr,i,j) ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] ;
    }
}