// Pritn the following 
/* 
1
12
123
1234
*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number of columns :" ;
    int n ;
    cin >> n ;
    int i ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            cout << j ;
        }
        cout <<endl;
    }
}
