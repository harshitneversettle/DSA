// First negative numbetr in in an window of size k 
#include<iostream>
#include<queue>
#include<vector>
using namespace std ;
int main(){
    queue <int> q ;
    vector <int> ans ;
    int k = 3 ;
    int arr[] = { 3,-4,-7,30,7,-9,2,1,6,-1 } ;
    int n = sizeof(arr)/ sizeof(arr[0]) ;
    int i = 0 ;
    for( int i = 0 ; i <= n-1 ; i++ ){
         if ( arr[i] <0 ) q.push(i) ;
    }

    while( i <= n-k ){
        while( q.size() > 0 && q.front() < i ) q.pop() ;
        if ( q.size() == 0 ) ans.push_back(0) ;
        if ( q.front() >= i+k ) ans.push_back(0) ;
        else ans.push_back(arr[q.front()]) ;
        i++ ;
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
    for ( int i = 0 ; i <= ans.size()-1 ; i++ ){
        cout << ans[i] << " " ;
    }
}