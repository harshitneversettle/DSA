// Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std ;
int number(int n){
    int count ;
    for ( int i = 1 ; i <= n ; i++ ){
        n = n / 10 ;
        count ++ ;
    }
}
int main (){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ; 
    cout << number(n)<< endl;


}