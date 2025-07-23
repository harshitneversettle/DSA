// Given a sorted array of n elements and a target 'x' find the first occurrence of 'x' in the array. if 'x'
// does not exist return -1 .

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int arr[] = { 1,2,2,3,3,3,3,3,4,4,5,5,9 } ;
    int low = 0 ;
    int high = 12 ;
    cout << " Enter your target value : " ;
    int target ;
    cin >> target ;
    bool flag = false ;
    while( low <= high ){
        int mid = (high + low)/2 ;
        if ( arr[mid] == target ){
            if ( arr[mid-1] == target ){
                high = mid-1 ;
            }
            else if ( arr[mid-1] != target ){
                cout << mid ;
                flag = true ;
                break ;
            }
        }
        else if ( arr[mid] > target ) high = mid -1 ;
        else if ( arr[mid] < target ) low = mid +1 ;
    }
    if ( flag == false ) cout << -1 ;
}
