//Given an array with N distinct elements , convert the given array to a form where all elements are in the
//range of 0 to N -1 the order of elements in is the same that is , zero is placed in the place of smallest
// element one is placed for the second smallest element and N -1 is placed for the largest element .

#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main(){
    int n = 5 ;
    int arr[] = { 19, 12 ,23, 8, 16} ;
    vector <int> v(n,0) ;   // vector me 0 mtlb not visited 
    int x = 0 ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        int min = INT_MAX ;
        int minindex = -1 ;
        for ( int j = 0 ; j <= n-1 ; j++ ){
            if ( v[j] == 1 ) continue ;
            else {
                if ( arr[j] < min ){
                    min = arr[j] ;
                    minindex = j ;
                }
            }
        }
        arr[minindex] = x ;
        v[minindex] = 1 ;
        x++ ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] ;
    } 
}