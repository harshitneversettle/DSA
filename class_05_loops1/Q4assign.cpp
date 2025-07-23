// Display this Ap- 4,7,10,13,16..... upto n terms 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a = 4 ;
    for ( int i = 1 ; i <= n ; i++ ){
        cout << a <<endl;
        a = a + 3 ;
    }
}