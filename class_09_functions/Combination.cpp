#include<iostream>
using namespace std;
int main(){
    cout << " Enter n : " ;
    int n ;
    cin >> n ;
    cout << " Enter r : " ;
    int r ;
    cin >> r ;
    // Find n factorial 
    int nfact = 1 ;
    for ( int i = 2 ; i <= n ; i++ ){
        nfact = nfact * i ;
    }
    // Find r fact 
    int rfact = 1 ;
    for ( int j = 1 ; j <= r ; j++ ){
        rfact = rfact * j ; 
    }
    // Find (n-r)fact 
    int s = n-r ;
    int nrfact = 1 ;
    for ( int k = 1 ; k <= s ; k++ ){
        nrfact = nrfact * k ;
    }
    
    int ncr = nfact / ( rfact * nrfact ) ;
    cout << ncr <<endl; 

    

}