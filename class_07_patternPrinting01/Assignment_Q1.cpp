/*  1111
    2222
    3333
    4444

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
            cout << i ;
        }
        cout <<endl;
    }
}
