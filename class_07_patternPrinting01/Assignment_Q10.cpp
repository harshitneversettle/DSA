/*    A
    A B
  A B C 
A B C D

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n - i ; j++ ){
            
            cout << " "  ;
    }
    for ( int k = 1 ; k <= i ; k++ ){
        int a = k + 64 ;
        cout << (char)a ;
    }
        cout <<endl;
}
}