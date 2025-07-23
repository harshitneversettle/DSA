// // Observatin 
// // 1. In each pass the nth element goes to the right to its right position 
// // 2. If there are 'n' elements then we require almost 'n-1' passes to sort 

// // Algorithm
// // In each pass swap 2 adjacent elements if arr[i] > arr[i+1] 
// // iterations in each pass reduces 

// Bubble sort is a stable sort 

// #include<iostream>
// using namespace std ;
// int main(){
//     int n = 6 ;
//     int arr[6] ={ 5,4,3,2,1 } ;
//     for( int i = 0 ; i <= n-1 ; i++ ){
//         cout << arr[i] << " " ;
//     }
//     cout << endl; 
//     for( int i = 0 ; i < n-1 ; i++ ){ // n-1 passes 
//         for ( int j = 0 ; j <= n-2 ; j++ ){  // traversing 
//             if ( arr[j] > arr[j+1]){
//                 swap( arr[j],arr[j+1] ) ;
//             }
//         }
//     }

//     for( int i = 0 ; i <= n-1 ; i++ ){
//         cout << arr[i] << " " ;
//     }
// }



// Check the array if it is sorted or not

#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 1,2,3,4,5 } ;
    bool flag = true ;
    for( int i = 0 ; i <= 4 ; i++ ){
        if (arr[i] > arr[i+1]){
            flag = false ;
            break ;
        }
        
    }
    if ( flag == true ) cout << " The given array is sorted " ;
    else if ( flag == false ) cout << " The given array is not sorted " ;
}




