// WAP to find the largest three elements in the array.

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
    int max1 = v[0] ;
    int max2 = v[0] ;
    int max3 = v[0] ;

    
    // for ( int i = 0 ; i <= v.size()-1 ; i++ ){
    //     if ( v[i] > max1 ) {
    //         max3 = max2 ;
    //         max2 = max1 ; 
    //         max1 = v[i] ;
    //     }
    //     else if ( v[i] > max2  ) {
    //         max3 = max2  ;
    //         max2 = v[i] ;}
    //     else if ( v[i] > max3 ) max3 = v[i] ;
    // }
    // cout << max1 << " " << max2 << " " << max3 << " " << endl;
    
     for ( int i = 0 ; i <= v.size()-1 ; i++ ){
        if ( v[i] > max1 ) { 
            max1 = v[i] ;
        }
        if ( v[i] > max2 && max2 < max1 ) {
            max2 = v[i] ;
        }
        if ( v[i] > max3 && max3 < max2 ) max3 = v[i] ;
    }
    cout << max1 << " " << max2 << " " << max3 << " " << endl;
    
   
   
}
    

