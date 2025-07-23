// Greatest element in an array 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ;
    vector <int> v ;
    cout << " Enter the elements of the array : " ;
    for ( int i = 0 ; i < n ; i++ ){
        int q ;
        cin >> q ; 
        v.push_back(q) ;
    }
    int max  ;
    for ( int i = 1 ; i <= v.size() -1 ; i++ ){
        if ( v[i] > v[i-1] ) max = v[i] ;

    }
    cout << max << " " ;
}