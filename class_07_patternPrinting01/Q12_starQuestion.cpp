/*   1
     2 3
     4 5 6
     7 8 9 10

*/   // for n = 4


#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int sum = 0 ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            sum = sum + 1 ;
            cout << sum << " ";    
        }
    cout <<endl;
}
}