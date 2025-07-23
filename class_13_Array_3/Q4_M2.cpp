#include<iostream>
#include<vector>
#include<climits>
using namespace std ; 
int main (){
    // cout << " Enter the size of 1st array : " ;
    // int n ; 
    // cin >> n ; 
    // vector <int> v ;
    // cout << " Enter the elements of array 1 : " ;
    // for ( int i = 0 ; i < n ; i++ ){
    //     int q ;
    //     cin >> q ; 
    //     v.push_back(q) ;
    // }

    // cout << " Enter the size of 2nd array : " ;
    // int m ; 
    // cin >> m ; 
    // vector <int> v2 ;
    // cout << " Enter the elements of array 2 : " ;
    // for ( int i = 0 ; i < n ; i++ ){
    //     int l ;
    //     cin >> l ; 
    //     v.push_back(l) ;
    // }
     vector <int> v ;      // v ir v2 ka size declare nhi kiya toh question solve ho gaya 
    vector <int> v2 ;
    v.push_back(0) ;
    v.push_back(3) ;
    v.push_back(5) ;
    v.push_back(7) ;

    v2.push_back(0) ;
    v2.push_back(2) ;
    v2.push_back(4) ;
    v2.push_back(6) ;
    v2.push_back(8) ;
    v2.push_back(9) ;
    int n = v.size() ;
    int m = v2.size() ;
    vector <int> v3(n+m) ;

    int a = n-1 ;
    int b = m-1 ;
    int c = m+n-1 ;
    while ( a >= 0 && b >= 0 ){
        if ( v[a] < v2[b] ){
            v3[c] = v2[b] ;
            b-- ;
            c-- ;
        }
        else {
            v3[c] = v[a] ;
            a-- ;
            c-- ;
        }

    
    }
    while ( a >= 0 ){
        v3[c] = v[a] ; 
        a-- ; 
        c-- ;
    }

    while ( b >= 0 ){
        v3[c] = v2[b] ; 
        b-- ; 
        c-- ;
    }

    for ( int i = 0 ; i < m+n ; i++ ){
        cout << v3[i] << " " ; 
    }
}
  // galti ye thi ki mene a ke saath phele wali condition laga diya tha a < n ye jb -- wala karenge tb nhi lagega ........ a >= 0 same with b .......