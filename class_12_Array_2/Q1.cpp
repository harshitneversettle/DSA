// Find the last occurrence of x in the array .

#include<bits/stdc++.h>
using namespace std ;
int main(){
   
    vector <int> v ;
    v.push_back(5) ;
    v.push_back(6) ;
    v.push_back(8) ;
    v.push_back(4) ;
    v.push_back(1) ;
    v.push_back(5) ;
    v.push_back(8) ;
    v.push_back(4) ;
    v.push_back(1) ;
    for ( int i = 0 ; i < v.size(); i++ ){
        cout << v[i] << " " ;
    }
    cout <<endl;
     cout << " Enter the number you have to search : " ;
     int s ; 
     cin >> s ;
     int x = 0 ;
    
    for ( int i = v.size()-1; i >= 0 ; i-- ){
        if ( v[i] == s ) {x = i ;
        // else x = x ;
        break ;
        }
    }
    cout << x << " " ;

    // for ( int i = 0 ; i < v.size() ; i++ ){
    //     if ( v[i] == s ) x = i ;
    // }
    // cout << x ;
   
    

}