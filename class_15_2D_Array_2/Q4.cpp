// wave form 
// input = 123456789
// output = 147852369

#include <iostream>
using namespace std ;
int main(){
    cout << " Enter the number of rows : " ;
    int n ; 
    cin >> n ;
    cout << " Enter the number if columns : " ;
    int m ; 
    cin >> m ; 
    cout << " Enter the elements of array : " ;
    int arr[n][m] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    // printing of array 
     for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
           cout << arr[i][j] << " " ;
        }
        cout << endl;
    }

    // algorithym 
    for ( int i = n-1 ; i >= 0 ; i-- ){
        if (i == 1 || i % 2 != 0 ){
            for ( int j = m-1  ; j >= 0 ; j-- ){
                cout << arr[i][j] ;
            }
        }
        else if ( i == 0 || i % 2 == 0 ){
            for ( int j = 0 ; j <= m-1 ; j++ ){
                cout << arr[i][j] ;
            }
        }
    }
}