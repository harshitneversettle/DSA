// lower bound == target se just phele wali value return krna hai 
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
            cout << arr[mid-1] ;
            flag = true ;
            break ;
        }
        else if ( arr[mid] < target ) low = mid +1 ;
        else high = mid -1 ; 
    }
    if ( flag == false ) cout << arr[high] ;
    
}


































 int arr[] = { 1,2,3,4,6 } ;
    int n = 5 ;
    int low = 0 ; 
    int high = n-1 ;
    int target ;
    cin >> target ;
    bool flag = false ;
    int lb = -1 ;
    int hb = -1 ;
    while ( low <= high ){
        int mid = (high + low)/2 ;
        if ( arr[mid] == target ){
            cout << arr[mid-1] ;
            lb = arr[mid-1] ;
            flag = true ;
            break ;
        }
        else if ( arr[mid] > target ) high = mid -1 ;
        else low = mid -1 ;
    }
    if ( flag == false ){
        lb = arr[high] ;
        cout << arr[high] ;
        }
        cout << " " ;
    while ( low <= high ){
        int mid = (high + low)/2 ;
        if ( arr[mid] == target ){
            cout << arr[mid+1] ;
            lb = arr[mid+1] ;
            flag = true ;
            hb = arr[mid+1] ;
            break ;
        }
        else if ( arr[mid] > target ) high = mid -1 ;
        else low = mid -1 ;
    }
    if ( flag == false ){
        hb = arr[low] ;
        cout << arr[low] ;
    }
    cout << " Enter k : " ;
    int k ;
    cin >> k ;
    
