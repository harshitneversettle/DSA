// WAP to find the transpose of a matrix 

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
            cin >> arr[i][j] ;
        }
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] ;
        }
        cout << endl ;
    }
    cout << endl ;

    // Solution by printing ----> i ki jagah j phele print krdo 
    for ( int j = 0 ; j <= m-1 ; j++ ){
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cout << arr[i][j] ;
        }
        cout << endl ;
    }
    cout << endl;

    // 1 new array me store kiya hai ;
    int arr2[m][n] ;
    for ( int i = 0 ; i<= m-1 ; i++ ){
        for ( int j = 0 ; j <= n-1 ; j++ ){
            arr2[i][j] = arr[j][i] ;
        }
    }

}
