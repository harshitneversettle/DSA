#include<iostream>
using namespace std ;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }

    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl;
    for ( int i = 0 ; i <= n-2 ; i++ ){
        int count = 1 ;
        for ( int j = i+1 ; j <= n-1 ; j++ ){
            if ( arr[i] == arr[j] ){
                count++ ;
            }
            arr[i] = -1 ;
        }
        
        if ( arr[i] != -1 ){
            cout << count  << " " ;
        }
    }
}