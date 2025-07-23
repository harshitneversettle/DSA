/*   for n = 4 print 

    *
    * *
    * * * 
    * * * * 
    * * *
    * *
    *

*/

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the number :" ;
    int n ;
    cin >> n ;
    int i ;
    for ( int i = 1 ; i <= 2*n-1 ; i++ ){
        for ( int j = 1 ; j >=  i ; j++ ){
            cout << "*" ;
            if ( j < n ) j++ ;
            else j-- ;
            
        }
        
        
        
        cout <<endl;  
    }
}


//doubt ;
