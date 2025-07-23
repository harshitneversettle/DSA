// Write a programme to find the largest element of a given 2D array of integers

#include<iostream>
#include<climits>
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

    // Now check the largest element ;
    int max = 0 ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            if (arr[i][j] > max ){
                max = arr[i][j];
            }
        }
    }
    cout << max ;
}