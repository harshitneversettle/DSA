// Inpyt a string of even length and reverse the first half of the string 

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    cout << " Enter your string : " ;
    getline(cin,s) ;
    cout << s << endl;
    // int n = s.size() ;
    if ( s.size() % 2 == 0 ){
        int half = s.size() / 2 ;
        cout << half ;
        cout << endl;
        reverse( s.begin() , s.end() - half ) ;
        cout << s << endl;
    }
    else cout << " Entered string is not of even length " << endl;
}