// Move all the negative numbers to beginning and positive to end with constant extra space 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the size of the array : " ;
    int n ; 
    cin >> n ;
    vector <int> v ;
    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;  

    }

    int i = 0 ;
    int j = v.size() -1  ;
    while ( i <= j ){
        if ( v[i] < 0 ) i++ ;
        else if ( v[j] > 0 ) j-- ;
        //if ( i < j ) break ;
        else if ( v[i] >= 0 && v[j] < 0 ) {
            int temp = v[i] ;
            v[i] = v[j] ;
            v[j] = temp ;
            i++ ;
            j-- ;
        }
        // cout << " Hello " ;
        // cout << v[i] ;
    }
    for ( int i = 0 ; i <= v.size() -1  ; i++ ){
        cout << v[i] << " " ;
    }
    }  