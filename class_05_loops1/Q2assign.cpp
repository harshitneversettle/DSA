// Q2. Print all the numbers between 1 to 100 which is divisibl by 3 

// method 1 
/*
#include<iostream>
using namespace std;
int main(){
    for ( int i = 1 ; i <= 100 ; i++ ){
        if ( i % 3 == 0 ) cout << i <<endl;
    }
}
*/

// method 2 
#include<iostream>
using namespace std;
int main(){
    int a = 3 ;
    for( int i = 3 ; i <= 100 ; i++ ){
     if ( a < 100 ) cout << a <<endl;
    a = a + 3 ;
    }
}