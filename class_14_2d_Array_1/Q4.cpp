// WAP for the sum of matrices 

#include<iostream>
using namespace std ;
int main(){
    int arr1[2][3] = { 1,2,3,4,5,6 } ;
    int arr2[2][3] = { 0,5,4,0,2,1 } ;

    int res[2][3] ;
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2  ; j++ ){
            res[i][j] = arr1[i][j] + arr2[i][j] ;
        }
    }
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2  ; j++ ){
            cout << res[i][j] ;
        }
        cout << endl;
    }
    cout << endl;

    // Without making the 3rd array
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2  ; j++ ){
            cout << arr1[i][j] + arr2[i][j] ;
        }
        cout << endl;
    }

    

}