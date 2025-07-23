// Number of stars and number of spaces in each line 
//     *
//    ***
//   *****
//  *******
// *********

// Pheli line me n - 1 stars hain or har line me stars 1 se km hoe ja rhe hain
// number of stars in first line is always one and vo har i ke liye 2 se increase kr raha hai 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int nst = 1 ;
    int nsp = n - 1 ;
    for ( int i = 1 ; i <= n ; i++ ){
        // For number of spaces 
        for ( int j = 1 ; j <= nsp ; j++ ){
            cout << " " ;
        }
        nsp-- ;    // isse number of spaces ghat te jayenge 
        for ( int k = 1 ; k <= nst ; k++ ){
            cout << "*" ;
        }
        nst = nst + 2 ;    // isse number of stars 2 se badhte jayenge 
        cout << endl;
    }
    

}