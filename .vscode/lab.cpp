// Pass by reference 

#include<iostream>
#include<vector>
using namespace std ;
int print(vector <int> &v , int n ){
    for( int i = 0 ; i <= n-1 ; i++ ){
        cout << v[i] << " ";
    }
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    vector <int> v ;
    for( int i = 0 ; i <= n-1 ; i++ ){
        int q ;
        cin >> q ;
        v.push_back(q) ;
    }
    print(v , n) ;
}