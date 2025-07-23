// Matrix multiplication 
// Write a programme to print the multiplication of two matrics given by the user 

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the rows of 1st matrix : " ;
    int n ;
    cin >> n ; 
    cout << " Enter the column of 1st matrix : " ;
    int m ;
    cin >> m ; 
    cout << " Enter the rows of 2nd matrix : " ;
    int p ;
    cin >> p ; 
    cout << " Enter the columns of 2nd matrix : " ;
    int q ;
    cin >> q ; 
    int arr[n][m] ;
    int arr2[p][q] ;
    if ( m == p ){
        int arr[n][m] ;
        int arr2[p][q] ;
        cout << " Enter the elements of 1st array : " ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            for ( int j = 0 ; j <= m-1 ; j++ ){
                cin >> arr[i][j] ;
            }
        }
        cout << " Enter the elements of 2nd array : " ;
        for ( int i = 0 ; i <= p-1 ; i++ ){
            for ( int j = 0 ; j <= q-1 ; j++ ){
                cin >> arr2[i][j] ;
            }
              
        }
    
    // Multiplication 
    int res[n][q] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= q-1 ; j++ ){
            res[i][j] = 0 ;
            for ( int k = 0 ; k <= p-1 ; k++ ){
                res[i][j] = res[i][j] + ( arr[i][k] * arr2[k][j]) ;
            }
        }
    }
    // Print 
    for ( int i = 0 ; i <= n-1 ; i++ ){
            for ( int j = 0 ; j <= q-1 ; j++ ){
                cout << res[i][j] << " " ;
            }
            cout << endl;
        }
    }

    else {
        cout << " The matrtix cannot be multiplied " ;
    }
}