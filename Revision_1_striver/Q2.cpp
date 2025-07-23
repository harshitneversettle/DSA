// Second largest element 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " The size of array : " ;
    int n ; 
    cin >> n ;
    vector <int> v;
    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ;
        v.push_back(q) ;
    }
    int max ; 
    int smax ;
    for ( int i = 0 ; i <= v.size() - 1 ; i++ ){
        if ( v[i] > v[i-1] ) max = v[i] ;
    }
    cout << max << endl ;

    for ( int i = 0 ; i <= v.size() - 1 ; i++ ){
        if ( v[i] > v[i-1] && v[i] != max ) smax = v[i] ;
    }
    cout << smax << endl;
}
