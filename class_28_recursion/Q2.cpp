// // Check whether the string is palindrome or not 

#include<iostream>
using namespace std ;
bool check ( string str , int i , int j ){
    if( i >= j ) return true ;
    if ( str[i] != str[j]) return false ;
    else return check( str , i+1 , j-1 ) ; ;
    
}
int main(){
    string str = "moom" ;
    int n = str.size()-1 ;
    cout << check( str , 0 , n ) ;
}