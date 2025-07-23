// score after flipping matrix ( Leetcode : 861 )
#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the  number of rows : " ;
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
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    
    // Main algorythm     yahan for loop isliye nhi lagaya hai kyuki hume j ka increment nhi krna hai
    
    int i = 0 ;
    int j = m-1 ;
    cout << " Enter the target : " ;
    int target ;
    cin >> target ;
    while(i <= n && j >= 0 ){
        if ( arr[i][j] == target ) cout<< " true " ;
        else if ( arr[i][j] > target ) j-- ;
        else i++ ;
    }
    
}