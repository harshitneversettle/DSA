// Given an integer 'numrows' generate pascal's triangle  ( Leetcode )
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    cout << " Enter the number of rows : " ;
    int n ;
    cin >> n ;
    // making of 2D vector 
    vector < vector<int> > v ;
    for ( int i = 1 ; i <= n ; i++ ){
        vector<int> a(i) ;
        v.push_back(a) ;
    }
    // Genertaion
    for ( int i = 0 ; i <= n -1 ; i++ ){
        for ( int j = 0 ; j <= i ; j++ ){
            if ( j == 0 || i == j ){
                v[i][j] = 1 ;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1] ;
            }
        }
    }
    for ( int i = 0 ; i <= n -1 ; i++ ){
        for ( int j = 0 ; j <= i ; j++ ){
           cout << v[i][j] << " " ;
        }
        cout <<endl;
    }


}