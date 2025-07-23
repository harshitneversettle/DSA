// Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

// Write a program to print the row number having the maximum sum in a given matrix.
// Write a C++ program to find the largest element of a given 2D array of integers.

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
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
    // Algo 
   int midr = 0 ; 
   int midc = 0 ;
   for ( int i = midr ; i <= n-1 ; i++ ){ 
    for ( int j = midc ; j <= m-1 ; j++ ){
        if ( midc %)
        }
    }
}
