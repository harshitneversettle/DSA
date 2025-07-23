// Calculater the product of al the elements in the given array......

#include<iostream>
using namespace std;
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ; 
    int arr[n] ;

    // input 
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }

    //output of product 
    int product = 1 ; 
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] <<" " << endl ;
        product = product * arr[i] ;
    }
    cout << product <<endl ;

}