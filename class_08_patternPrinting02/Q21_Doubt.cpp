/*      1 2 3 4 5 6 7 
        1 2 3   5 6 7 
        1 2       6 7 
        1           7

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int m = n - 1 ;
    for( int a = 1  ; a <= 2*n-1 ; a++){
        cout << a ;
    }
     cout <<endl;

     
     for ( int i = 1 ; i <= m ; i++ ){
        for ( int j = 1 ; j <= n-i ; j++ ){
            cout << j ;
        
        }
        for ( int k = 1 ; k <= 2 * i - 1 ; k++ ){
            cout << " " ;
        }
        for ( int q = 2*m-1 ; q <= 2*n-1 ; q = q + 2){
            cout << q ;

            
        }
    
        
        cout <<endl;
    }

}