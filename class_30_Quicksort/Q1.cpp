// Find kth smallest element 

#include<iostream>
using namespace std ;
int partition( int arr[] , int si , int ei ){
    int count = 0 ;
    int pivotElement = arr[(si+ei) / 2 ] ;
    for ( int i = si ; i <= ei ; i++ ){
        if ( i == (si+ei) / 2 ) continue ;
        if ( arr[i] <= pivotElement ) count++ ;
    }
    int pivotIndex = count + si ;
    swap ( arr[(si+ei)/2] , arr[pivotIndex]) ;
    int i = si ;
    int j = ei ;
    while ( i < pivotIndex && j > pivotIndex ){
        if ( arr[i] < arr[pivotIndex] ) i++ ;
        if ( arr[j] > arr[pivotIndex] ) j-- ;
        else if ( arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex] ){
            swap ( arr[i] , arr[j] ) ;
            i++ ; 
            j-- ;
        }
    }
    return pivotIndex ;
}

int quickSort( int arr[] ,int si , int ei , int k ){
   // if ( si >= ei ) return ; 
    int pi = partition(arr,si,ei) ;
    if ( pi+1 == k ) return arr[pi] ;
    if ( k < pi+1 ) return quickSort( arr , si , pi-1 , k  ) ; // pi se peeche ki call 
    if ( k > pi+1 ) return quickSort( arr , pi+1 , ei , k  ) ; // pi se aage ki call
    // pi+1 isliye hua haoioi kyuki indexing 0 se hoti nhai 
}
int main(){
    int arr[] = { 5,1,8,2,7,6,3,4 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int k = 3 ;
    cout << quickSort( arr , 0 , n-1 , k ) ;
    
}