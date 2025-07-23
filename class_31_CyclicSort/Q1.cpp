// LEETCODE (268) 

#include<iostream>
#include<vector>
using namespace std ;
// M1
// int main(){
//     int arr[] = { 4,3,2,6,1,7,8,9,0 } ;
//     int n = sizeof(arr) / sizeof(arr[0]) ;
//     vector <bool> check(n+1,false) ;
//     for( int i = 0 ; i <= n-1 ; i++ ){
//         int element = arr[i] ;
//         check[element] = true ;
//     }
//     for ( int i = 0 ; i <= n ; i++ ){   //  n-1 tk nhi chalega b/c 1 element missing hai 
//         if ( check[i] == false ) cout << i ;
//     }
// } 

// M2
int main(){
    int arr[] = { 4,3,2,6,1,7,8,9,0 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int i = 0 ;
    while ( i < n ){
        int correctidx = arr[i] ;
        if ( arr[i] == i || arr[i] == n ) i++ ;
        else swap( arr[i] , arr[correctidx] ) ;
    }
    for( int i = 0 ; i <= n-1 ; i++ ){
        if( arr[i] != i ) cout << i ;
    }
}