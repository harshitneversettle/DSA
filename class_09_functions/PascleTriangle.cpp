/*      1
        1  1
        1  2  1 
        1  3  3  1 
        1  4  6  4  1 
        1  5  10  10  1          

        // Observation ye hai ki lets say row = n and columns = s hai 
        toh har 1 element ncs hai ............


*/

#include<iostream>
using namespace std;

int factorial (int x){
    int f = 1 ;
    for ( int i = 1 ; i <= x ; i++ ){
        f = f * i ;
    }
    return f ;
}
int combination(int x , int y ){
    int s = x - y ;
        int nfact = factorial(x) ;
        int rfact = factorial(y) ;
        int nrfact = factorial(s) ;
        int combi = nfact/(rfact*nrfact) ;
}

    int main(){
        cout << " enter the number of rows : " ;
        int n ;
        cin >> n ; 
        
        for ( int i = 0 ; i <= n ; i++){
            for ( int j = 0 ; j <= i ; j++ ){
                cout << combination( i , j ) ; 

            }
            cout <<endl ;
        }
    }


            