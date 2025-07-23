// Display this Ap- 100,97,94,.... upto all terms which are positive 

#include<iostream>
using namespace std;
int main(){
   // for( int i = 100 ; i <= 0 ; i = i-3 ){
   //     cout << i <<endl;
   // }
//}

int a = 100 ;
for ( int i = 1 ; i <= 100 ; i++ ){
    if ( a > 0 ) cout << a <<endl;
    a = a - 3 ;
}
}