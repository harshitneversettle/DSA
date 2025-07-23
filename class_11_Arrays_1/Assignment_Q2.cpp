// Find the second largest element in the given Array in one pass.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout << " Enter the size f your array : " ;
    int n ; 
    cin >> n ;
    int arr[n] ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] <<" " <<endl ;
    }
    // ab max find kro 
    int max = INT_MIN ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        if ( max < arr[i] ) max = arr[i] ;
    }
    cout << max <<endl ;

    int secondmax = INT_MIN ;
    for (int i = 0 ; i <= n-1 ; i++){
        if ( arr[i] != max && secondmax < arr[i] ) secondmax = arr[i] ;


    }
    cout << secondmax <<endl;
}