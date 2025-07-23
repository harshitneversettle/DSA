// Parenthesis generation ( LEETCODE 22 ) 
// HINT = at any instant , opening bracket >= closing bracket 
#include<iostream>
using namespace std ;
void generate( string str , int op , int cl , int n ){
    if ( op == n && cl == n ){
        cout << str << endl ;
        return ;
    }
    if ( op < cl ) return ;
    if( op < n ) generate( str + '(' , op+1 , cl , n ) ; 
    if ( op > cl ) generate( str + ')' , op , cl+1, n ) ;

}
int main(){
    int n = 3 ;
    generate( "" , 0 , 0 , n ) ;
}   