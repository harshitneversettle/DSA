// Skipping a character 
// Remove all the a's from an given string

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void remove( string &ans , string &str, int n , int i ){
    if ( i == n ) {
        cout << ans ;
        return ;
    }
    if ( str[i] != 'a' ) ans += str[i] ;
    remove( ans , str,  n , i+1 ) ;

}
int main(){
    string str = " Harshit Yadav " ;
    int n = str.length();
    string ans = "" ;
    remove( ans , str , n , 0 ) ;
}