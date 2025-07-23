// calculate the sum of all the sum of all the elements in the given array .

#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout << " Enter a number : " ;
    int arr[n] ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] ;
    }
    int sum ;
    for ( int i = 1 ; i <= n-1 ; i++ ){ 
        sum = sum + arr[i] ;
        
    }
    cout << sum ;
}