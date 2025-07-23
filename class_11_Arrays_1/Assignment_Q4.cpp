// Given an array, predict if the array contains duplicates or not.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " "  ;
    }
    bool flag = false ; 
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int k = 1 ; k <= n-1 ; k++ ){
            if ( arr[i] == arr[k] ) flag = true ;
        }
            
}
            if ( flag == true ) cout << " duplicale value found " ;
            else cout << " No duplicate value found " ;

}