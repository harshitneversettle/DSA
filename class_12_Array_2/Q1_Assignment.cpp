// Count the number of elements strictly greater than x.

#include<bits/stdc++.h>
using namespace std ; 
int main() {
    cout << " Enter the  size of array : " ;
    int n ; 
    cin >> n ; 
    vector <int> v ;

    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;
    }
    for (int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] ;
    }
    cout << endl;
    
    cout << " Enter a number : " ;
    int m ; 
    cin >> m ; 

    int count = 0 ;
    for( int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] > m ) count++ ;
    }
    cout << count << " "  ;
}
    

