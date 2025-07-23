// find the next permutations of array ( leetcode 81 )
// Note : If not posible then print the sorted order in ascending order 

// Hint : 1. find the pivot index 
//        2. index +1 se lekr end tk reverse krdo 

// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std ;
int main (){
    // cout << " Enter the size of array : " ; 
    // int n ; 
    // cin >> n ; 
    // cout << " Enter the elements of array : " ;
    // vector <int> v ;
    // for ( int i = 0 ; i < n ; i++ ){
    //     int q ; 
    //     cin >> n ; 
    //     v.push_back(q) ;
    // }

    vector <int> v ;
    v.push_back(2) ;
    v.push_back(3) ;
    v.push_back(1) ;
   // v.push_back(3) ;
    int n = v.size() ;

    // sbse phele pivot index ko dundho 
    
    int index = -1 ;
    for ( int i = n-2 ; i >= 0 ; i-- ){
        if ( v[i] < v[i+1] ){
            index = i ;
            break;
        }
    }
    if ( index == -1 ){
        reverse ( v.begin() , v.end() ) ;
    }

    //reverse after the piviot 
    reverse(v.begin() + (index+1) , v.end()) ;

    // ab pivot ke baad se index se just bada number find kro 
    int j = -1 ;
    for ( int i = index +1 ; i <= v.size() -1 ; i++ ){
        if ( v[index] < v[i] ){
            j = i ;
        }
    }

    // 3rd step : Swapp index and j ;

    int temp2 = v[index] ;
    v[index] = v[j] ;
    v[j] = temp2 ;

    // Printing
    
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
    }
    
}