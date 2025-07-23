#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the numbers : " ;
    int arr[3] ;
    for ( int i = 0 ; i <= 2 ; i++ ){
        cin >> arr[i] ;
    }
    int max = arr[0] ;
    for ( int i = 0 ; i <= 2 ; i++ ){
        if ( arr[i] > max ) max = arr[i] ;
    }
    cout << max ;
}