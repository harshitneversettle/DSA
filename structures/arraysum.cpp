#include<iostream>
using namespace std ;
int arraysum(int arr[], int n ){
    int sum = 0 ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        sum += arr[i] ;
    }
    cout << sum << endl ;

}
int main(){
    cout << " Enter size of array : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
        
    }
    arraysum( arr, n ) ;
}