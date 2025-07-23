/*      1 2 3 4
        1 2 3
        1 2
        1
    
*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number :" ;
    int n ;
    cin >> n ;
    int i ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n ; j++ ){
            int sum = i + j ;
           if ( sum >= n + 2 ) cout << " " ;
           else cout << j << " " ;
        }
            cout <<endl;
    }
}
