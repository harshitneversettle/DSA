#include<iostream>
#include<stack>
using namespace std ;
int main(){
    stack <int> st ;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;
    st.push(50) ;

    
    // reverse order printing      50 40 30 20 10
    stack <int> gt ;
    while ( st.size() > 0 ){    
        cout << st.top() << " " ;
        gt.push(st.top()) ;
        st.pop() ;
    }
    cout << endl ;
    stack <int> ht ;
    // ye loop seedhe order me print karega     10 20 30 40 50 
    while ( gt.size() > 0 ){
        cout << gt.top() << " " ;
        ht.push(gt.top()) ;
        gt.pop() ;
        st.push(ht.top()) ;
    }
    cout << endl << st.top() ;
}
