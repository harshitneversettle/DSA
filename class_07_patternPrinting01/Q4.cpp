/* Print the programme to print the following pattern
****
***                         // Hint : row + number of stars  = columns + 1
**                          // number of stars = column - row + 1 
*

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number of columns :" ;
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n + 1 -i ; j++ ){
            cout << "*" ;
        }
        cout <<endl;
    }
}


// i = number of rows 