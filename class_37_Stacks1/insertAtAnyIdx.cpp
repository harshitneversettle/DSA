// displaying recursively 
#include<iostream>
#include<stack>
using namespace std ;
void display( stack <int> &st ){
    stack <int> gt ;
    while ( st.size() > 0 ){    // jbtk st stack khali nhi ho jata tbtk loop chalega 
        //cout << st.top() << " " ;
        gt.push(st.top()) ;
        st.pop() ;
    }
    stack <int> ht ;
    while ( gt.size() > 0 ){
        cout << gt.top() << " " ;
        ht.push(gt.top()) ;
        gt.pop() ;
        st.push(ht.top()) ;
    }
    cout << endl ;
}

void insertAtIdx ( stack <int> &st , int idx , int value ){
    stack <int> ht ;
    while ( st.size() > idx ){
        ht.push( st.top() ) ;
        st.pop() ;
    }
    st.push( value ) ;
    while ( ht.size() > 0 ){
        st.push( ht.top() ) ;
        ht.pop() ;
    }
    return ;
}
int main(){
    stack <int> st ;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;
    st.push(50) ;
    display(st) ;
    insertAtIdx(st , 2 , 110 ) ;
    display(st) ;
    insertAtIdx( st , 4 , 200 ) ;
    display(st) ;
}