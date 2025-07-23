// Majority element ( LEETCODE 169 ) 
// Given an array nums of size n , return the majority element . The majority element is the element that
// appears more than n/2 times . You may assume that the majority element always exist in the array 
// array ko sort kro or jo element sbse jada baar aaya hoga vo middle me obv present hoga ....
#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        int j = i ;
        while ( j >= 1 && arr[j] < arr[j-1] ){
            if ( arr[j] > arr[j-1] ) break ;
            else ( swap ( arr[j-1] , arr[j] ) ) ;
            j-- ;
        }
    }
    cout << arr[n/2] ;
}