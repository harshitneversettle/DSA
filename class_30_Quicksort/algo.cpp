// Quick sort 
// It is unstable sort 
// TC = O(nlogn)  SC = O(logn)
#include<iostream>
using namespace std ;
int partition(int arr[] , int si , int ei ){
    // int pivotElement  = arr[si] ;
    int pivotElement  = arr[(si+ei) / 2 ] ;   // TO reduce the TC of the worst case 5 4 3 2 1  
    int count = 0 ;
    for ( int i = si ; i <= ei ; i++  ){    
        //if ( i == si ) continue; 
        if (i ==  (si+ei) / 2) continue;
        if ( arr[i] <= pivotElement ) count++ ;
    }
    int pivotIndex = count + si ;
    swap ( arr[(si+ei) / 2 ] , arr[pivotIndex]) ; 
    int i = si ; 
    int j = ei ;
    while( i < pivotIndex && j > pivotIndex ){
        if ( arr[i] <= pivotElement ) i++ ;
        if ( arr[j] > pivotIndex ) j-- ;
        else if ( arr[i] > pivotElement && arr[j] <= pivotElement ){
            swap ( arr[i] , arr[j] ) ;
            i++ ;
            j-- ;
        }
    }
    return pivotIndex ;
}
void mergesort( int arr[] , int si , int ei ){
    if ( si >= ei ) return ;
    int pi = partition( arr , si , ei ) ;
    mergesort( arr, si , pi-1 ) ;
    mergesort( arr, pi+1 , ei ) ; 
}
int main(){
    int arr[] = { 5,1,8,2,7,6,3,4 } ;
    int n = sizeof(arr)/ sizeof(arr[0]) ;
    mergesort( arr, 0 , n-1 ) ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " "  ;
    }
}   


// worsty case mem is code ki time complexity acchi nhi hogi ... to improve its time complexity 
// we have to find pivotElement as arr[(si+ei) /2  ]