// Search in a rotated sorted array (LEETCODE 33 )
// task 1 : find pivot element/index   [ pivot == arr[mid] < arr[mid-1] && arr[mid] < arrp[mid+1] ]
// task 2 : 0 se pivot-1 or pivot se n-1 tk 2 alag alag array me target ko search krna hai 
#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 28,33,1,3,4,8,20 } ;
    int n = 7 ;
    int low = 0 ;
    int high = n-1 ;
    int pivot = -1 ;
    cout << " Enter the target : " ;
    int target ;
    cin >> target ;
    while (low <= high ){
        int mid = (low + high)/2 ;
        if ( arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1] ){
            pivot = mid ;
            cout << arr[mid] <<" " << mid ;
            break ;
        }
        else if ( arr[mid] > arr[n-1] ){
            low = mid+1 ;
        }
        else high = mid-1 ;
        
    }
    bool flag = false ;
    if ( target > arr[pivot] ){
        low = pivot ;
        high = n-1 ;
         while ( low <= high ){
            int mid = (high + low)/2 ;
            if ( arr[mid] == target ){
                cout << " found " << mid ;
                flag = true ;
                break ;
            }
            else if ( arr[mid] > target ) high = mid-1 ;
            else low = mid+1 ;
        }
    }
    else {
        low = 0 ;
        high = pivot-1 ;
         while ( low <= high ){
            int mid = (high + low)/2 ;
            if ( arr[mid] == target ){
                cout << " found " << mid  ;
                flag = true ;
                break ;
            }
            else if ( arr[mid] > target ) high = mid-1 ;
            else low = mid+1 ;
        }
    }
    if ( flag == false ) cout << -1 ;

}