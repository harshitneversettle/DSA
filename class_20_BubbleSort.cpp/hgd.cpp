#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 1,2,3,4,5,6,7,8,9 } ;
    int max = arr[0] - arr[1] ;
    int min = arr[0] - arr[1] ;
    for ( int i = 0 ; i <= 8 ; i++ ){
        for ( int j = i+1 ; j <= 8 ; j++ ){
            if ( arr[i] - arr[j] > max ) max = arr[i] - arr[j] ;
            else if ( arr[i] - arr[j] < min ) min = arr[i] - arr[j] ;
        }
    }
    cout << max << " " << min ;
}