// previous greater element 


#include<iostream>
#include<stack>
using namespace std ;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
    int ans[n] ;
    ans[0] = -1 ;
    stack <int> st ;
    st.push(arr[0]) ;
    for( int i = 1 ; i <= n-1 ; i++ ){
        while ( st.size() > 0 && arr[i] >= st.top() ){
            st.pop() ;
        }
        if( st.size() != 0 ) ans[i] = st.top() ;
        else ans[i] = -1 ;
        st.push(arr[i]) ;
    }
    for( int i = 0 ; i <= n-1 ; i++ ){
        cout << ans[i] << " " ;
    }
}