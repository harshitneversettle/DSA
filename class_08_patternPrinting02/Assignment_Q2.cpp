/*      A
      A B C 
    A B C D E 
  A B C D E F G 

*/      

#include<iostream>
 using namespace std ;
 int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int nsp = n - 1 ;
    char ch ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= nsp ; j++ ){
            cout << " " ;
        }
        nsp-- ;
        for ( int k = 1 ; k <= 2*i-1 ; k++ ){
            int s = k + 64 ; 
            cout << ( char )s ;
        }
        cout <<endl ;

    }
    
 }   