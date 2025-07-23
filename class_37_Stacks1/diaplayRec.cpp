// displaying recursively 
#include<iostream>
#include<stack>
using namespace std ;
stack <int> gt ;
void display( stack <int> &st ){
    if ( st.size() == 0 ) return ;    // base case 
    cout << st.top() << " " ;   // kaam 
    gt.push(st.top() ) ;
    st.pop() ;
    display(st) ;    // calling 
    cout << endl << st.top() ;
}
int main(){
    stack <int> st ;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;
    st.push(50) ;

    display(st) ;
}