// Input a string of even length and return the second half of that string using inbuilt substr function 

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str ;
    cout << " Enter your string : " ;
    getline(cin,str) ;
    cout << str << " " ;
    int n = str.size() ;
    if ( n % 2 == 0 ){
    int m = n / 2 ;
    cout << str.substr(m) ;
    }
    else cout << " Error 404 not found " <<endl;

}