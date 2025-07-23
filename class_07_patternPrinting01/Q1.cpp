/*Print the given pattern 
  ****
  ****
  ****
*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number of rows : " ;
    int n ; 
    cin >> n ;
    cout << " Enter the number of columns : " ;
    int m ;
    cin >> m ;
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= m ; j++ ){
            cout << "*" ;
        }
        cout << endl;
    }
    
}