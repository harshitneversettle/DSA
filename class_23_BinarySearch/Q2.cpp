// Given a sorted array of non negative distinct integers. find the smallest missing non negative element 
// in it .

// code with time complexity of O(n) ;
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[] = { 0,1,2,3,4,8,9,12 } ;
//     int count = 0 ;
//     int n = 8 ;
//     for ( int i = 0 ; i <= n-1 ; i++ ){
//         if ( arr[i] != i ) break ;
//         count++ ;
//     }
//     cout << count ;
// }

// code with time complexity of O(log n) { binary search algotithm }\

#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 0,1,2,3,4,8,9,12 } ;
    int low = 0 ;
    int high = 8-1 ;
    int ans = 0 ;
    while( low <= high ){
        int mid = (low + high)/2 ;

        if ( arr[mid] == mid ) {
            low = mid+1 ;
        }
        else {
            ans = mid ;
            high = mid -1 ;
        }
    }
    cout << ans ;

}