// Remove consecutive duplicates from a string 
// aaabbccaabf --> abcabf ... return a string 

#include<iostream>
#include<stack>
#include<string>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str = "aaabbcddeff" ;
    int n = str.length() ;
    stack <char> st ;
    st.push(str[0]) ;
    int i = 1 ;
    while ( i <= n-1 ){
        if ( st.top() == str[i] ) i++ ;
        else ( st.push(str[i]) ) ;
    }
    string ans = "" ;
    while ( st.size() > 0 ){
        ans = ans + st.top() ;
        st.pop() ;
    }
    reverse(ans.begin() , ans.end() ) ;
    cout << ans ;

}