// Sort the array of 0's and 1's 
// Isme pure vector me baar traverse hota hai 
// Hint hai ki isme doo variable chalaao or swap krdo 0 ko frint me rakhna hai or 1 ko end me rakhna hai 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the the size of array : " ;
    int m ; 
    cin >> m ;  
    vector <int> v ;
    for ( int i = 0 ; i < m ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q)  ;
    }
    int n = v.size() -1 ;

    // if ( n % 2 == 0 ){
    // for ( int i = 0 , j = n ; i <= j ; i++ , j-- ){
    //     if ( v[i] > v[j] && v[i-1] > v[i] ) {
    //         int temp = v[i] ;
    //         v[i] = v[j] ;
    //         v[j] = temp ;

    int i = 0 ;
    int j = n ;
    while ( i < j ){
        if ( v[i] == 0 ) i++ ;
        if ( v[j] == 1 ) j-- ;
        if ( i > j ) break ;  // yr isliye lagaya hai kyuki 1 1 0 1 0 1 1 0   ye test case fail ho  raha hai 
        if ( v[i] > v[j] ){
            // swap krdo 
            int temp = v[i] ;
            v[i] = v[j] ;
            v[j] = temp ;
            i++ ;
            j-- ;

        }
    }
    // for ( int i = 0 , j = n ; i <= j ; i++ , j-- ){
    //     if ( v[i] > v[j] && v[i-1] > v[i] ) {
    //         int temp = v[i] ;
    //         v[i] = v[j] ;
    //         v[j] = temp ;
    // }
    // }

    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
    }
}
    

    // else ()




