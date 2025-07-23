// Check if the given function is palindrome or not 
#include<iostream>
#include<string>
using namespace std ;
bool check( string &str , int i , int j ){
    if ( i >= j ) return true  ;    // Base case
    if( int(str[i]) != int(str[j] ) ) {
        return false ;
    }
    check( str , i+1 , j-1 ) ;

}
int main(){
    bool flag = false ;
    cout << " Enter the string : " ;
    string str ;
    getline(cin,str) ;
    int i = 0 ;
    int j = str.size() -1  ; 
    cout << check( str , i , j ) ;
    
}