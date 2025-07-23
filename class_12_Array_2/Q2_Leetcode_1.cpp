// Find the doublet in the array whose sum is equal to the given value x 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector <int> v ;
    cout << " Enter size of array : " ;
    int n ; 
    cin >> n ;
    cout << " Enter the elements : " ;
    int m ; 
    for ( int i = 0 ; i < n ; i++){
        int q ;
        cin >> q ;
        v.push_back(q) ;
    }
   
    // Printing of array 
     for ( int i = 0 ; i < v.size() ; i++){
         cout << v[i] << " " ;
    }
    
    cout << endl;
    cout << " Enter the target value : " ; 
    int x ;
    cin >> x ;
    
    // Main solution 
    for ( int i = 0 ; i < v.size() -1 ; i++ ){
        for ( int j = i+1 ; j < v.size() -2 ; j++ ){
            if ( v[i] + v[j] == x ){
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

   
    

}