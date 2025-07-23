// Write a program to add two matrices and save the result in one of the given matrices.
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
    cout << " Enter the elements : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] ;
        }
        cout << endl;
    }
    //2nd matrix
    int arr2[n][m] ;
    cout << " Enter the elements of arr2 : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cin >> arr2[i][j] ;
        }
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr2[i][j] ;
        }
        cout << endl ;
    }
    cout << endl ;
    // addition 
    //int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] + arr2[i][j] << " " ;
        }
        cout << endl;
    }

}