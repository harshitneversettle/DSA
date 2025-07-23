#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str = "Naam kya hai" ;
    sort( str.begin() , str.end() );
    string str2 ;
    getline ( cin , str2 ) ;
    sort ( str2.begin() , str2.end() ) ;
    if ( str == str2 ) {
        cout << "Bhupendra Jogi" <<endl ;
        cout << "US me kahan kahan gye ho aap " << endl;
        cout << "US me bhot jagah gaya hu me " << endl;
        string str3 = "Naam bataiye" ;
        sort(str3.begin() , str3.end() ) ;
        string str4 ;
        getline ( cin , str4 ) ;
        sort( str4.begin() , str4.end() ) ;
        if( str3 == str4 ) cout << "Bhupendra Jogi" << endl;
    } 
}