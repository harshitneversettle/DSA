// Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;
int square(int n ){
    n = n * n ;
}
int first(int n ){
    for ( int i = 1 ; i <= n ; i++ ){
        cout << i << " " << "=" << " " << square (i) <<endl;
    }
}

int main(){
    cout << " Enter a number : ";
    int n ; 
    cin >> n ; 
   cout << first (n) <<endl;
}