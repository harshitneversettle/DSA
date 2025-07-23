// Write a programe to print the sum of series 1-2+3-4+5-6....... upto n terms.

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int odd = 0 ;
    int even = 0 ;
    //int i ;
    //int i2 ;
    for ( int i = 1 ; i <= n ; i = i + 2 ){
        odd = i + odd ;
        //cout << i <<endl;
        //break ;
    }
    for ( int i2 = 2 ; i2 <= n ; i2 = i2 + 2 ){
        even = i2 + even ;
        //cout << i2 <<endl;
    }
    int sum = odd - even ;
    cout << sum <<endl;
    
}