// higher bound == target se just badi value return krna hai 
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
            cout << arr[mid+1] ;
            flag = true ;
            break ;
        }
        else if ( arr[mid] < target ) low = mid +1 ;
        else high = mid -1 ; 
    }
    if ( flag == false ) cout << arr[low] ;
    
}