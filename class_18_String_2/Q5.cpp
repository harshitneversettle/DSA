// Given n strings consisting of digits form 0 to 9 . Return the index of string which has maximum value ( Take 0 based indexing )

#include<iostream>
using namespace std ;
int main(){
    string arr[6] = { "0123" , "0023" , "456" , "00182" , "940" , "002901"} ;
    int max = stoi(arr[0]) ;
    for ( int i = 1 ; i <= 5 ; i++ ){
        int x = stoi(arr[i]) ;
        if ( max < x ) max = x ;
    }
    cout << max << endl ;
}