// Sort the array of 0's and 1's 
// Isme pure vector me 2 baar traverse hota hai 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the the size of array : " ;
    int n ; 
    cin >> n ;  
    vector <int> v ;
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q)  ;
    }
    // for ( int i = 0 ; i <= v.size() -1 ; i++ ){
    //     cout << v[i] << " " ;
    // }
    // cout << endl;
    // cout << endl;
    int noz = 0 ; 
    int noo = 0 ;
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] == 0 ) { 
            noz++ ; 
            
            }
        else  noo++ ;
    }
    cout << endl ; 
    for (int i = 0 ; i <= v.size() -1  ; i++){
        if ( i <= noz -1  ) {
            v[i] = 0 ;
            // break;
        }
        else v[i] = 1 ;
    }

    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
        
    }
    cout << endl;
    
}

