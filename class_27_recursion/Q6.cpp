// Q5 number format 

#include<iostream>
#include<vector>
using namespace std ;
void subset ( int arr[] , int n , int i , vector <int>& v ){
    if( i == n ){
        for ( int i = 0 ; i <= v.size() -1 ; i++ ){
            cout << v[i] << " " ;
        }
        cout << endl ;
        return  ;
    }
    subset( arr, n , i+1,v) ; 
    v.push_back(arr[i]) ;
    subset( arr, n , i+1,v) ; 
    
}
int main(){
    int arr[] = {1,2,3} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    vector <int> v ;
    subset( arr, n , 0 , v ) ;
}