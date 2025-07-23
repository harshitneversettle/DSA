/*     
           *
         * *
       * * *
     * * * * 

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int sum ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n ; j++ ){
            sum = i + j ;
            if ( sum <= n ) cout << " " ;
            else cout << "*" ;
        
    }
    cout <<endl;

}
}
     
