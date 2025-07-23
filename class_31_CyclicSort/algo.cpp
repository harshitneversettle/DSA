// Where to use ---> 1 to n ya fir 0 to n
// TC = O(n)    n-1 swaps  

#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 4,5,6,1,2,3 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int i = 0 ;
    while ( i < n ){
        int correctIdx = arr[i] -1 ;
        if ( i == correctIdx ) i++ ;
        else { 
            swap ( arr[i] , arr[correctIdx]) ;
        }
    }
    for( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " " ;
    }
}