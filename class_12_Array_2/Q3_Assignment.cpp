// // Check if the given array is sorted or not


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
    
    // vector <int> v(6) ;
    // v.push_back(5) ;
    // v.push_back(6) ;
    // v.push_back(2) ;
    // v.push_back(5) ;
    // v.push_back(1) ;
    // v.push_back(3) ;

    bool flag = true ; 
    for ( int i = 1 ; i < v.size()  ; i++ ){
        if ( v[i] < v[i-1] ) {
            flag = false ;
            break ;
        }

    }
        cout << flag << endl;
        if ( true ) cout << " The given array is sorted " <<endl;
        else cout << " The given array is not sorted " <<endl;
       }



    

