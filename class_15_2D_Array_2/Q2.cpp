// Write q programme to print the matrix in wave form 
// input : 123456789
// output : 123654789
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
    cout << " Enter the elements of array : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cin >> arr[i][j]  ;
        }
    }
    // Printing 
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    
    for ( int i = 0 ; i <= n-1 ; i++ ){
           if ( i == 0 || (i % 2 == 0) ){
            for ( int j = 0 ; j <= m-1 ; j++ ){
                cout << arr[i][j] << " " ;
            }
        }
        else if ( i == 1 || i % 2 != 0 ){
            for ( int j = m-1 ; j >= 0 ; j-- ){
                cout << arr[i][j] << " " ;
            }
        }

        }
    }
    