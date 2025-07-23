// Leetcode 78 

#include<iostream>
#include<string>
using namespace std ; 
int print ( string str , string ans , int i ){
    if ( str.length() == i ){
        cout << ans << endl ;
        return 0 ;
    }
    print ( str, ans+str[i] , i+1  ) ;    // isme append hua hai 
    print ( str, ans , i+1 ) ;     // isme append nhi hua hai 

}
int main(){
    string str = "abc" ;
    print ( str , "" , 0) ;
}