// Find the 2nd largest value out of all the elements in an array 

#include<iostream>
#include<climits>           // Jb bhi INT_MAX ka use krna ho 
using namespace std ;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ; 
    int arr[n] ;
    cout << " Enter the elements : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        //cout << arr[i] << " " <<endl ;
    }

    // Most accurate method ;
    int max = arr[0] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){     // i ko 1 se isliye start kiya hai kyuki max ke andar arr[0] phele se store tha 
        if ( max < arr[i] ) max = arr[i] ;
    }
    //cout << max ;

    // for 2nd largest value 
    int secondmax = arr[0]  ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        if ( arr[i] != max && secondmax < arr[i] ) secondmax = arr[i] ;
    }
    cout << max <<endl;
    cout << secondmax <<endl ;
}