// Given two strings s and t , return true if t is an anagram of s , and false otherwise 
// ( Leetcode 242 )
#include<bits/stdc++.h>
using namespace std ;
int main() {
    string s = " physicswallah " ;
    string t = " wallahphysics " ;
    sort( s.begin() , s.end() ) ;
    sort( t.begin() , t.end() ) ;
    cout << s << endl << t << endl ;
    if ( s == t ) cout << " true " ;
    else cout << " False " ;
}