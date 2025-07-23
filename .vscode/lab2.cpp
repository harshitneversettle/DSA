#include<iostream>
using namespace std ;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    int* ptr = arr ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << *(ptr+i) ;
    }
}