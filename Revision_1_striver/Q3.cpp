// check if the array is sorted


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
    bool flag = true  ;
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] >= v[i-1] ) flag = true  ;
        else flag = false ;
    }
    cout << flag ; 
    if ( flag == true ) cout << " The array is sorted " ;
    else cout << " The array is not sorted " ;
}
