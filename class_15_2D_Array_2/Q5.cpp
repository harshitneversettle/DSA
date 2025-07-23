// column wise printing 
// input : 123456789
// output : 147852369
#include<bits/stdc++.h>
using namespace std ;
int main() {
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
    // Algo
    for ( int j = 0 ; j <= m-1 ; j++ ){
        if ( j == 0 || j % 2 == 0 ){
            for ( int i = 0 ; i <= n-1 ; i++ ){
                cout << arr[i][j] <<" " ;
            }
        }
        else if ( j == 1 || j % 2 != 0 ){
            for ( int i = n-1 ; i >= 0 ; i-- ){
                cout << arr[i][j] << " " ;
            }
        }
    }

}