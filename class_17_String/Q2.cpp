// Input a string of size n and update all the even positions in the string to character 'a' . consider 0-based indexing ;

#include<iostream>
using namespace std;
int main() {
    string s ;
   
    cout << " Enter your string : " ;
    getline(cin,s) ;
    for ( int i = 0 ; s[i] != '\0' ; i++ ){
        if ( i % 2 == 0 ){
            s[i] = 'a' ;
        }
    }
    cout << s;

}