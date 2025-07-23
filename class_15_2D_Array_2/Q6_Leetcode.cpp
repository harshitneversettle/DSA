// write a programme to print the matrix in spiral form  ( Leetcode : 54 ) ( max hamesha -- hoga or min hamesha ++ hogaa )
// input : 123456789
// output : 123698745
#include<iostream>
using namespace std ; 
#include<string >

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
            cin >> arr[i][j] ;
        }
    }
    // Printing 
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // Main algo 
    int minr = 0 ; 
    int maxr = n-1 ;
    int minc = 0 ;
    int maxc = m-1 ;
    while ( minr <= maxr && minc <= maxc ){
        //Right 
        for ( int j = minc ; j <= maxc ; j++ ){
            cout << arr[minr][j] << " ";
        } 
        minr++ ;
        if ( minr > maxr || minc > maxc ) break ;//aise isliye kyuki 3*4 ka testcase fail ho gya tha 
        //Down 
        for ( int i = minr ; i <= maxr ; i++ ){
            cout << arr[i][maxc] << " " ;
        }
        maxc-- ;
        if ( minr > maxr || minc > maxc ) break ;
        //left 
        for ( int j = maxc ; j >= minc ; j-- ){
            cout << arr[maxr][j] << " " ;
        }
        maxr-- ;
        if ( minr > maxr || minc > maxc ) break ;
        //Top
        for ( int i = maxr ; i >= minr ; i-- ){
            cout << arr[i][minc] << " ";
        }
        minc++ ;
    }
    cout << endl;
}