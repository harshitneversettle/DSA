// Given n strings consisting of lowercase english alphabets . Print the charscter that is occurring most numeber of times ;
// ye wala code samaj nhi aaya ..........
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s = "harshit";
    vector <int> v ( 26, 0 ) ;
    for ( int i = 0 ; i <= s.size()-1 ; i++ ){
        char ch = s[i] ;
        int ascii = (int)ch ;
        v[ascii - 97]++ ;
    }
    int max = 0 ; 
    for ( int i = 0 ; i < 26 ; i++ ){
        if ( v[i] > max ) max = v[i] ;
    }

    for ( int i = 0 ; i < 26 ; i++ ){
        if (v[i] == max ){
            int ascii = i + 97 ;
            char ch = (char)ascii ;
            cout << ch << " " << max << endl ;
        }
    }
}