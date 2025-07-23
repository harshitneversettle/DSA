// Print the factorial of a given number 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number :" ;
    int n ;
    cin >> n ; 
    int i =1;
    for ( int x = 1 ; x <= n ; x++ ){
        i = i * x ;
    }
    cout << i <<endl;
    return 0;

}

