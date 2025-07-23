// Peak index in mountain array (LEETCODE 852)

#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 1,3,5,6,4,3,2,0 } ;
    int low = 0 ;
    int high = 6 ;
    while ( low <= high ){
        int mid = (low + high)/2 ;
        if ( arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] ){
            cout << arr[mid] ;
            break ;
        }
        else if ( arr[mid] > arr[mid+1] ){
            high = mid-1 ;
        }
        else if ( arr[mid] < arr[mid+1] ){
            low = mid+1 ;
        }
    }
}
