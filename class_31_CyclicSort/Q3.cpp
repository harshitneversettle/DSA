// LEETCODE (448) 
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int arr[] = { 3,2,3,4,8,2,7,1} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int i = 0 ;
    while ( i < n ){
        int correctIdx = arr[i] -1  ;  //b/c indexing 0 se chalu nhi hui hai 
        if ( arr[correctIdx] == arr[i] ) i++ ;
        else swap( arr[correctIdx] , arr[i] ) ;
    }
    vector <int> ans ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        if ( arr[i] != i+1 ) ans.push_back(i+1) ;   // i+1 b/c indexing 0 se start nhi hui 
    }
    for( int i = 0 ; i <= ans.size()-1 ; i++ ){
        cout << ans[i] ;
    }
    
}