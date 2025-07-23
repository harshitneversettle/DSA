// LEETCODE 455 ( Cookies question )

#include<iostream>
#include<vector> 
#include<climits>
#include<algorithm>
using namespace std ;
int main(){
    vector <int> cookie= { 5,6,7,8,9,15,14,13,10,16 } ;
    vector <int> greed= { 16,15,14,7 } ;
    sort( cookie.begin() , cookie.end() ) ;
    sort( greed.begin() , greed.end() ) ;
    int min1 = min( cookie.size() , greed.size() ) ;
    int i = 0 ;
    int j = 0 ;
    int count = 0 ;
    while ( i < cookie.size() && j < greed.size() ){
        if ( cookie[i] >= greed[j] ){
            i++ ;
            count++ ;
        }
        else j++ ;
    }
    cout << count << endl ; 
}