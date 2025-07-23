/*        A B C D E F G 
          A B C   E F G 
          A B       F G 
          A           G 


*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ; 
    cin >> n ;
    char ch ;
    for( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n - i + 1 ; j++){
            int a = j + 64 ;
            cout << (char)a ;
        }
        for ( int k = 1 ; k <= i ; k++ ){
            cout << "#" ;
        }
        
            cout << endl;
}
}