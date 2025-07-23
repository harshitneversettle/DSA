// Balanced brackets ..... [ (,),),( ]     ...... for every opening bracket .... there must be an unique clo9sing brackett 
// agar koi closing brackett hai [)] toh uska consecutive opening usse phele hi aana chaiye 

/*    sbse phele given string ko traverse kro 
      step 1 -> If you see an opening bracket .... then push it in the stack 
      step 2 -> If you swee an closing bracket ... rhen go to the stack and pop the top ....
      step 3 -> if you counter an closing bracket and the stack is empty ... then return false ...b/c
                closing bracket ka openung pairt usse phele aana chaiyee ....

      step 4 -> if stack is empty ... return true ....else false
*/


#include<iostream>
#include<stack>
#include<string>
using namespace std ;
bool ans( string str ){
    stack <char> st ;
    int n = str.length() ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        if( str[i] == '('  ){
            st.push(str[i]) ;
        }
        else {
            if ( st.size() == 0 ){
                return false ;
            }
            else {
                st.pop() ;
            }
        }
    }
    if ( st.size() == 0 ) return true ;
    else return false ;
}
int main(){
    bool flag = false ;
    string str = "()()()()" ;
    cout << ans(str) ;
    
    

}