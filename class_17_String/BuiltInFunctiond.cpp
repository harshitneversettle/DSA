#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    // string s ;
    // getline(cin,s) ;
    // Built in function for finding size
    // cout << s ;
    // cout << endl;
    // cout << s.size() << " " ;   // built in function   s.size() null character ko nhi ginta hai 
    // cout << s.length() << " " ;  // dono ka kaam same hai 

    // string str = { 'a','b','c','d' } ;
    // cout << str << endl ; 
    // str.push_back('f') ;
    // str.push_back('g') ;
    // cout << str << endl ;
    // str.pop_back() ;    // peche se 1 string hata dega 
    // cout << str << endl ;

    // add 
    // string s = { 'a','b','c' } ;
    // cout << s << endl ;
    // s = s + "xyz" ;
    // cout << s << endl ;
    // s = "123" + s ;
    // cout << s << endl ;

    // Reverse 
    string s = "abcde" ;
    cout << s << endl ;
    // reverse( s.begin(),s.end() ) ;
    // cout << s << endl;

    // Reverse part
    reverse( s.begin() +2 , s.end() -1 ) ;
    cout << s << endl;

}