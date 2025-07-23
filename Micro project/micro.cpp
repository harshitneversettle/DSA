#include<iostream>
using namespace std ;
int main(){
    cout << " Enter number of subjects : " ;
    int n ;
    cin >> n ;
    float arr[n] ;
    cout << " enter marks : " ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for( int i = 0 ; i <= n-1 ; i++ ){
        arr[i] = arr[i] / 10 ;
    }
    float sum = 0 ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        sum = sum + arr[i] ;
    }
    float cgpa = sum/n ;
    cout << cgpa ;
}
