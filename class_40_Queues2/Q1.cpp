// Reverse first k elements 

#include<iostream>
#include<queue>
#include<stack>
using namespace std ;
void display(queue<int> q ){
    int n = q.size() ;
    for( int i = 1 ; i <= n ; i++ ){
        int x = q.front() ;
        cout << x << " " ;
        q.pop() ;
        q.push(x) ;
    }
    cout << endl ;
}
void reverse( int n , int k , queue<int>& q , stack<int> st ){
    for( int i = 0 ; i <= k-1 ; i++ ){
        int x = q.front() ;
        st.push(x) ;
        q.pop() ;
    }
    while ( st.size() != 0 ){
        q.push(st.top()) ;
        st.pop() ;
    }
    for( int i = 1 ; i <= n-k ; i++ ){
        int x = q.front() ;
        
        q.pop() ;
        q.push(x) ;
        
    }
     
}
int main(){
    queue<int> q ;
    q.push(1) ;
    q.push(2) ;
    q.push(3) ;
    q.push(4) ;
    q.push(5) ;
    q.push(6) ;
    int n = q.size() ;
    display(q) ;
    cout << " Enter k : " ;
    int k ;
    cin >> k ;
    stack <int> st ;
    reverse( n , k , q , st ) ;
    display(q) ;
}



// Next is LEETCODE 1700 
// Leetcode 232 
