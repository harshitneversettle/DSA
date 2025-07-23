// Given n strings consisting of lowercase english alphabets . Print the charscter that is occurring most numeber of times ;

#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str ;
    getline(cin,str) ;
    int n = str.size() ;
    cout << str << endl << endl ;
    
    int maxcount = 0 ;
    for ( int i = 0 ; i <= n -1 ; i++ ){
        char ch = str[i] ;
        int count = 1 ;
        for( int j = i+1 ; j <= n -1 ; j++ ){
            if ( str[j] == str[i] ) count++ ;
            if ( count > maxcount ) maxcount = count ;
        }
    }
    for ( int i = 0 ; i <= n -1 ; i++ ){
        char ch = str[i] ;
        int count = 1 ;
        for( int j = i+1 ; j <= n -1 ; j++ ){
            if ( str[i] == str[j] ) count++ ;
        }
            if ( count == maxcount ) cout << maxcount << " " << ch << endl  ; 
    }
}