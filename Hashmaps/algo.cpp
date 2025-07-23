#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }

    
    int hash[13] ={0} ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        hash[arr[i]] += 1 ;
    }

    cout << " number of targets : " ;
    int q ;
    cin >> q ;
    cout << " Enter targets : " ;
    int i = 0 ;
    while( i!=q ){
        int number ;
        cin >> number ;

        // fetching 
        cout << hash[number] << " " ;
        i++ ;
        
    }
    
}