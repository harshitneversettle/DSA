// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the number of rows : " ;
    int n ;
    cin >> n ;
    cout << " Enter the number of columns : " ;
    int m ;
    cin >> m ;
    int arr[n][m] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            arr[i][j] = 10 ;
        }
        
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

