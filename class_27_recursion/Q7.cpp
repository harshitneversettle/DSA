// Substring having duplicate letters 

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void substr( string str , string original , vector <string> &v , bool flag ){
    if ( original == "" ){     // jb original string khali ho jaaye 
        v.push_back(str) ;
        return ;
    }
    char ch = original[0] ;
    if ( original.length() == 1 ){
        if ( flag == true ) substr( str+ch , original.substr(1) ,  v , true ) ;    // ye imp hai ki nphele wali call me hi add kr rhe hain 
        substr( str , original.substr(1) ,  v , true ) ;
        return ;
    }
    char dh = original[1] ;
    if ( ch == dh ){    // duplicasy spotted 
        if (flag == true ) substr( str+ch , original.substr(1) ,  v , true ) ;   // substring used 
        substr( str , original.substr(1) ,  v , false ) ;
    }
    
    else {
        if (flag == true) substr( str+ch , original.substr(1) ,  v , true ) ;    // normal call ;
        substr( str , original.substr(1) ,  v , true ) ;
}

}
int main(){
    string str = "aaba" ;    // isme duplicate string hai 
    vector <string> v ;
    substr( "" , str , v , true ) ;    // True is an checkmark for checking 
    for ( int i = 0 ; i <= v.size()-1  ; i++ ){
        cout << v[i] << endl ;
    }
}