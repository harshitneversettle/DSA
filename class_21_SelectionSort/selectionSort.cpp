#include<iostream>
#include<climits>
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    // algo 
    for ( int i = 0 ; i < n -1 ; i++ ){  // less than equal to nhi lagega becoz n-1 se 1 baar phele tk hi me sort ho jayega 
        int min = INT_MAX ;
        int minindex = -1 ;
        for ( int j = i ; j <= n-1 ; j++ ){
            if ( arr[j] < min ){
                min = arr[j] ;
                minindex = j ;
            }
        }
        swap ( arr[minindex] , arr[i] ) ;
    }
     for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] ;
    }
}