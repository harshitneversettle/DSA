 /* A
    A B 
    A B C
    A B C D 

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number :" ;
    int n ;
    cin >> n ;
    int i ;
    char ch ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n ; j++ ){
            int sum = i + j ;
            int a = j + 64 ;
            if ( sum >= n + 2 ) cout << " " ;
            else cout << (char)a << " " ;
        }
        cout <<endl;
    }
}
