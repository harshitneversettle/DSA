// LEETCODE 704 

#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    cout << " Enter the target value : " ;
    int target ;
    cin >> target ;
    int low = 0 ;
    int high = n-1 ;
    bool flag = false ;
    while ( low <= high ){
        int mid = (high + low) / 2 ;
        if ( arr[mid] == target ){
            flag = true ;
            break ;
        }
        else if ( arr[mid] > target ) high = mid -1 ;
        else low = mid +1 ; 
    }
    if ( flag == false ) cout << " Not found " ;
    else cout << " found " ;
}