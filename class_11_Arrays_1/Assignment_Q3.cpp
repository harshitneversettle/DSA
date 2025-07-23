// Find the minimum value out of all elements in the array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " "  ;
    }
    int min = INT_MAX ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        if ( min > arr[i] ) min = arr[i]  ;
    }
    cout << min <<endl;
}