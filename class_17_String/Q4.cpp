// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt function

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    getline(cin,s) ;
    cout << s << endl ;
    int m = s.size() ;
    if ( m > 5 ){
        reverse(s.begin() +1 , s.begin() + 5 ) ;  // jahan tk reverse krna hota hai vo+1 ;
        cout << s << endl;
    }
    else cout << " Entered string is smaller than 5 " << endl;
}