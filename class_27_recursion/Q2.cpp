// MAX number in an array using recursion 
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void Max(int arr[] , int n ,int i , int max ){
    // Base case 
    if ( n == i ){
        cout << max ;
        return ;
    }
    // Kaam 
    if ( arr[i] > max ) max = arr[i] ;
    // calling 
    Max(arr,n,i+1,max) ;
}
int main(){
    cout << " Enetr a number : " ;
    int n ;
    cin >> n ;
    cout << " Enter elements : " ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    Max(arr,n,0,INT_MIN) ;
}