// Count And say ( LEETCODE 38 )

#include<iostream> 
#include<string>
using namespace std ;
string cas( int n ){
    if ( n == 1 ) return "1" ;
    string str = cas(n-1) ;
    string ztr = "" ;
    int freq = 1 ;
    char ch = str[0] ;
    for( int i = 1 ; i <= str.length()-1 ; i++ ){
        char dh = str[i] ;
        if ( ch == dh ){
            freq++ ;
        }
        else{
            ztr = ztr + ( to_string(freq) + ch ) ;
            freq = 1 ;
            ch = str[i] ;
        }
    }
    ztr = ztr + ( to_string(freq) + ch ) ;
    return ztr ;
}
int main(){
    int n = 3 ;
    string str = cas(n) ;
    cout << str << endl; 
    

}