// Write a program to rotate the matrix by 90 degrees anti-clockwise.// Write a program to print the elements of both the diagonals in a square matrix.
// sbse phele transpose lo fir column ko reverse krdo 
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
    // Transpose printing 
    for ( int j = 0 ; j <= m-1 ; j++ ){
        for ( int i = 0 ; i <= m-1 ; i++ ){
           cout << arr[i][j] ;
        }
        cout << endl ;                                                  
    }
    cout << endl;
    for ( int j = 0 ; j <= m-1 ; j++ ){
        for ( int i = 0 , k = n-1 ; i <= k ; i++ , k-- ){
            int temp = arr[i][j] ;
            arr[i][j] = arr[k][j] ;
            arr[k][j] = temp ;
        }
    }
    for ( int j = 0 ; j <= m-1 ; j++ ){
        for ( int i = 0 ; i <= m-1 ; i++ ){
           cout << arr[i][j] ;
        }
        cout << endl ;                                                  
    }

   
}



