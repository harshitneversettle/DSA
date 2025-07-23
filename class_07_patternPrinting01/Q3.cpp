/* Print the pattern 
    *
    **
    ***
    ****
*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
   // cout << " Enter number of columns : " ;
   // int m ;
   // cin >> m ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            cout << '*' ;
        }
        cout <<endl;
    }
}