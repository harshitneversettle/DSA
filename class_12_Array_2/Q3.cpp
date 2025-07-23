// Given array ko ulta krke likh do 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector <int> v ;
   
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ; 
    cout << " Enter the elements of array : " ;
    int m ; 
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;
    }
    for ( int i = 0 ; i < v.size() ; i++ ){
        cout << v[i] << " " ;
    }
    cout << endl;
    vector <int> v2(v.size()) ;
    for ( int i = 0 ; i <v.size() ; i++ ){
        // i+j = size - 1     i = iterator of 1st array and j = iterator of 2nd array 
        // j = size - 1 - j 
        
        v2[i] = v[v.size() - 1 - i] ;

   }
    for ( int i = 0 ; i < v.size() ; i++ ){
        cout << v2[i] << " " ;

    }

}