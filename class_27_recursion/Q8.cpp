// sub sequence ka q hai upto k 

#include<iostream>
#include<vector>
using namespace std ;
void subset ( int arr[] , int n , int i , vector <int> v ,  int k  ){   // &v se vo har baar naya vector nhi bana raha 
    if( i == n ){
        if ( v.size() == k ){
            for ( int i = 0 ; i <= v.size() -1 ; i++ ){
            cout << v[i] << " " ;
        }
        cout << endl ;
    }
        return  ;
    }
    if ((( n-i )+ v.size() )< k ) return ;
    subset( arr, n , i+1,v,k) ; 
    v.push_back(arr[i]) ;
    subset( arr, n , i+1,v , k) ;
    
}
int main(){
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    vector <int> v ;
    int k = 3 ;
    subset( arr, n , 0 , v , k ) ;
}