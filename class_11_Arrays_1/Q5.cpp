// Find the maximum value out of all the elements in an array 

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ; 
    int arr[n] ;
    cout << " Enter the elements : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        //cout << arr[i] << " " <<endl ;
    }

    // Most accurate method ;
    int max = arr[0] ;
    for ( int i = 1 ; i <= n-1 ; i++ ){     // i ko 1 se isliye start kiya hai kyuki max ke andar arr[0] phele se store tha 
        if ( max < arr[i] ) max = arr[i] ;
    }
    cout << max ;
}