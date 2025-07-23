#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }

    
    map < int , int > m ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        m[arr[i]] += 1 ;
    }

    cout << " number of targets : " ;
    int q ;
    cin >> q ;
    cout << " Enter targets : " ;
    int i = 0 ;
    while( i!=q ){
        int number ;
        cin >> number ;
        cout << m[number] << " " ;
        i++ ;
        
    }
    
}