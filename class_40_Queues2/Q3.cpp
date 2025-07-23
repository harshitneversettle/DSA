// Reorder queue 

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void display( queue<int> q ){
    int n = q.size() ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        int x = q.front() ;
        cout << q.front() << " " ;
        q.pop() ;
        q.push(x) ;
    }
    cout << endl ;
}
int main(){
    queue<int> q ;
    q.push(1) ;
    q.push(2) ;
    q.push(3) ;
    q.push(4) ;
    q.push(5) ;
    q.push(6) ;
    q.push(7) ;
    q.push(8) ;

    stack<int> st ;
    
    int n = q.size() ;
    
   for(int i = 0 ; i < n/2 ; i++ ){
        st.push(q.front()) ;
        q.pop() ;
    }
    while( st.size() >0 ){
        q.push(st.top()) ;
        st.pop() ;
    }
    
    for( int i = 0 ; i < n/2 ; i++ ){
        st.push(q.front()) ;
        q.pop() ;
    }
    

    for( int i = 0 ; i < n/2 ; i++ ){
        q.push(st.top()) ;
        st.pop() ;
        q.push(q.front()) ;
        q.pop() ;
    }
    display(q) ;
    cout << endl ;
    //reverse 
    for( int i = 0 ; i <= n-1 ; i++ ){
        st.push(q.front() ) ;
        q.pop() ;
    }
    while(st.size() > 0 ){
        q.push(st.top()) ;
        st.pop() ;
    }
    display(q) ;
}