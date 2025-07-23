// Kth symbol in Grammer ( LEETCODE 779 ) 
// Time complexity == O(n) ;

#include<iostream>
using namespace std ;
int generate ( int n , int k ){
    if ( n == 1 ) return 0 ; // Base case  
    if ( k % 2 == 0 ){    // even ke case me flip bhi krna hai 
        int prevAns = generate(n-1 , k/2) ;
        if ( prevAns == 0 ) return 1 ;
        else return 0 ;
    }
    else {   // no flipping 
        int prevAns = generate( n-1 , k/2 + 1 ) ;
        return prevAns ;
    } 
}
int main(){
    int n = 4 ;
    int k = 4 ; 
    cout << generate( n , k ) ;
}