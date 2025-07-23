/* Print the output
1234
1234
1234
1234 */

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number of rows :" ;
    int n ;
    cin >> n ;
    cout << " Enter the number of columns :" ;
    int m ;
    cin >> m ;
    for ( int i = 1 ; i <= n ; i++ ){     // Bahar wala number row number hota hai 
        for( int j = 1 ; j <= m ; j++ ){
            cout << j;
        }
        cout << endl;
    }
}