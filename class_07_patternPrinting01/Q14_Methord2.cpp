/* Methord 2 
   by making three loops 
*/


#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int sum ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n - i ; j++ ){
            cout << " " ;
        }
        for ( int k = 1 ; k <= i ; k++ ){
            cout << "*" ;
        }
    cout <<endl;

}
}