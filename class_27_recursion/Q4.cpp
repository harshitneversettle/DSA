// Skir an element of an array 
#include<iostream>
using namespace std ;
#include<vector> 

void skip( int arr[] ,vector <int> v , int n , int i , int m ){
    if ( i == n ){
        for( int i = 0 ; i <= n-2 ; i++ ){
            cout << v[i] << " " ;
        }
        return ;
    }
    if ( arr[i] != m  ) v.push_back(arr[i]) ;
    skip( arr , v , n , i+1 , m ) ;

}
int main(){
    cout << " Enter a number :"  ;
    int n ;
    cin >> n ;
    cout << " Enetr elements : " ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    cout << " Enter element to be dleted : " ;
    int m ;
    cin >> m ;
    vector <int> v;
    skip( arr, v , n , 0 , m ) ;
}