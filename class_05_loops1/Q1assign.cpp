//  Q1. Print all the odd numbers between 1 to 100  

// method 1

/* #include<iostream>
using namespace std;
int main(){
    for( int i = 1 ; i <= 100 ; i++ ){
       if ( i % 2 != 0 ) cout << i <<endl;
    }
}
*/

// method 2 

#include<iostream>
using namespace std;
int main(){
    int a = 1 ;
    for ( int i = 1 ; i <= 50 ; i++ ){
        cout << a <<endl;
        a = a + 2 ;
    }
}