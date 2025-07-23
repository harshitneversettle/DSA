// solve Q3 at only only pass ( Dutch flag method )

//  arrange 0's 1's and 2's in order 
// 75 ( sort colour ) Leetcode 

// metord
// high ke baad hamesha 2 rhena chaiye 
// low ke phele hamesha 0 rhena chaiye 
// low se leke mid-1 tk 1 rhena chiye 



#include<bits/stdc++.h>
using namespace std ;
void swap( int i , int j ){
   
    //return;
}
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ;
    vector <int> v;
    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i < n; i++ ){
        int q ;
        cin >> q ;
        v.push_back(q) ;
        }
        // int low ;
        // int mid ;
        // int high ;
    
    // int low = 0 ;
    int low = 0 ;
    int mid = 0 ; 
    int high = v.size() - 1 ; 
    while ( mid <= high ){
        if ( v[mid] == 2 ){
            int temp = v[mid] ;
            v[mid] = v[high] ;
            v[high] = temp ;
            high-- ;
        }
        else if ( v[mid] == 0 ){ 
            int temp = v[mid] ;
            v[mid] = v[low] ;
            v[low] = temp ;
            low ++ ; 
            mid ++ ;
        }
        else 
            mid ++ ;                  // kyuki mid -1 se phele tk hamesha 1 rhena chaiye isliye bs mid ko ++ kiya hai 
        
    }
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
    }
}

    
    
