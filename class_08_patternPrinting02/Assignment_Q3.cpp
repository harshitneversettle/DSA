/*     A
     B A B 
   C B A B C 
 D C B A B C D 

 */

#include<iostream>
using namespace std;
int main (){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    char ch ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n - i ; j++ ){
            cout << " "  ;
        }
        for ( int k = i ; k >= 1 ; k-- ){
            int a = k + 64 ;
            cout << ( char )a  ;
        }
        for ( int q = 2 ; q <= i  ; q++ ){
            int s = q + 64 ;
            cout << (char)s  ;
        }
        cout <<endl;
    }
    
}