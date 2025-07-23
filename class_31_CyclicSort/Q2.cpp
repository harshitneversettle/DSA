// LEETCODE (287)
// Finding duplicate element 

#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 1,2,2,3,4 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int i = 0 ;
    while ( i < n ){
        int correctIdx = arr[i] ;
        if ( arr[correctIdx] == arr[i] ){
            cout << arr[i] ;
            break ;
        } 
        else swap ( arr[i] , arr[correctIdx]) ;
    }
}