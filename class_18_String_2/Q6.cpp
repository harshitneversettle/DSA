// Input n strings and write a program to find the longest common prefix string of all the strings 
// ( Leetcode 14 )

#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str ;
    getline(cin,str) ;
    int n = str.size() ;
    cout << str << endl ;
    sort(str.begin() , str.end() ) ;
    string s = "" ;
    string first = str[0] ;
    string last = str[n-1] ;
    for ( int i = 0 ; i < (min(first.size() , last.size()) ) ; i++ ){
        if ( first[i] == last[i] ){
            s = s + first[i] ;
        }
        else cout << " 0 " << endl;
    }
    cout << s << endl;
}