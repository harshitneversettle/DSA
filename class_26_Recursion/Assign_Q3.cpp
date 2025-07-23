// Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]

#include<iostream>
#include<bits/stdc++.h>

using namespace std ;
void countandsay(int arr[] , int n , int i ){
    if ( n == 0 ) return  ;
    vector <int> v[n-1] ;
    for( int i = 0 ; i <= n-1 ;i++ ){
        cout << v[i] ;
        if(i!=0){
            v[i-1] = arr[i] + arr[n-1] ;
        }
    }
}
int main(){
    cout << " Enter a numeber : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    countandsay(arr , n , 0 ) ;
}


// Pending 