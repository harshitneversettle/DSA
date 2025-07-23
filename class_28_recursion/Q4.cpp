// Print all the binary strings without consecutive ones 

#include<iostream>
using namespace std ;
void print( string ans  , int n ){
    if ( ans.size() == n ){
        cout << ans << endl ;
        return ;
    }
    print( ans + '0' , n) ;
    if ( ans == "" || ans[ans.length()-1 ] == '0' ) print( ans + '1' , n) ;    // 1 wale case me call nhi lagegi 
}
int main(){
    int n = 3 ;
    print( "" , n ) ;
}