#include<iostream>
using namespace std ;
int main(){
    int arr[6] = { 1,2,3,4,5,6 } ;
    int arr2[7] ;
    int n = 4 ; // position 
    int s = 7 ; // element to be inserted 
    for ( int i = 0 ; i <= 6 ; i++ ){
        if ( i >= n ){
            arr2[i+1] = arr[i] ;
            arr2[n] = s ;
        }
        else arr2[i] = arr[i] ;
    }
    for ( int i = 0 ; i <= 6 ; i++ ){
        cout << arr2[i] ;
    }
}