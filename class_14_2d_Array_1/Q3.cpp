// WAP a programme to print the sum of all the elements of a 2D matrix

#include<iostream>
using namespace std ;
int main (){
    int arr[2][3] ;
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2 ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2 ; j++ ){
            cout<< arr[i][j] << " " ;
        }
        cout << endl;
    }
    int sum = 0 ;
    for ( int i = 0 ; i <= 1 ; i++ ){
        for ( int j = 0 ; j <= 2 ; j++ ){
            sum = sum + arr[i][j] ;
        }
    }
    cout << sum ;
}
