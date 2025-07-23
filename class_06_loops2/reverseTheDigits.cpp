// Write a programe to print reverse of a givin number 

#include<iostream>
using namespace std;
int main (){
    int n ;
    cin >> n ;
    int r = 0 ;
    int lastdigit = 0 ;
    while ( n > 0 ){
        r = r * 10 ;
        lastdigit = n % 10 ;
        r = r + lastdigit ;
        n = n / 10 ;
    }
    cout << r <<endl;
}