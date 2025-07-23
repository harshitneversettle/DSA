//  arrange 0's 1's anfdf 2's in order 
// 75 ( soort colour ) Leetcode 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ;
    vector <int> v;
    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i < n; i++ ){
        int q ;
        cin >> q ;
        v.push_back(q) ;    }

    int no0 = 0 ; 
    int no1 = 0 ;
    int no2 = 0 ; 
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] == 0 ) no0++ ;
        else if ( v[i] == 1 ) no1++ ;
        else if ( v[i] == 2 ) no2++ ;
    } 

    for (int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( i <= no0 -1 ) cout << "0" ;
        else if ( i >= no0 -1  && i <= (no0-1 ) + no1 ) cout << "1" ;
        else cout << "2" ; 
    }  
    cout << endl;

    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
    }
    cout << endl ;
    }
