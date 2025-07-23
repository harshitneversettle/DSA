#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[n] ;
    for(int i = 0; i < n; i++) {
            int count1 = 1 ;
            int count2=1 ;
        // for(int j  = i+1 ; j < n; j++) {
        //     if(i==j) continue;
        //     else {
        //         count = count * arr[j];
        //     }
        // }
        int j = 0 ;
        int k = i+1 ;
        while( i>j ){
            count1 *= arr[j] ;
            j++ ;
        }
        while ( k <= n-1 && i < k  ){
            count2 *= arr[k] ;
            k++ ;
        }
        arr2[i] = count1 * count2 ;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = arr2[i] ;
        cout<<arr[i]<<" ";
    }
}