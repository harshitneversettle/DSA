// Combinational sum  ( LEETCODE 39 ) 
#include<iostream>
#include<vector>
using namespace std ;
void combination( vector <int> v , int arr[] , int n , int idx , int target ){
    if ( target == 0 ){
        for( int i = 0 ; i <= v.size()-1 ; i++ ){
            cout << v[i] << " " ;
        }
        cout << endl ;
        return ;
    }
    if ( target < 0 ) return ;   // negative case 
    for( int i = idx ; i<=n-1 ; i++ ){     // idx se start isliye hua b/c to restrict same permutation 
        v.push_back(arr[i]) ;
        combination( v,arr,n,i,target-arr[i] ) ;    // idx ki jagah i bheja hai idx me 
        v.pop_back() ;
    }
}
int main(){
    int arr[] = { 2,3,5 } ;
    int target = 8 ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    vector <int> v ;
    combination( v,arr,n,0,target ) ;
}