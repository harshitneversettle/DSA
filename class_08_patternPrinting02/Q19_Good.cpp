/*                      
                *
              * * *
            * * * * *
          * * * * * * *                // Use nsp & nst ;
            * * * * *                  // Humari 2n-1 lines print ho rhi hai
              * * *
                *

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int nst = 1 ;
    int nsp = n - 1 ;
    for ( int i = 1 ; i <= 2*n-1 ; i++ ){
        for ( int j = 1 ; j <= nsp ; j++ ){
            cout << "  " ;
        }
        if ( i < n ) nsp-- ;
        else nsp++ ;
        for ( int k = 1 ; k <= nst ; k++ ){
            cout << "* " ;
        }
        if ( i < n ) nst = nst + 2 ;
        else nst = nst - 2 ;
        cout <<endl;
      
    }
}