//#include<iostream>
// #include<vector>     
// #include<algorithm>  
#include<bits/stdc++.h>     // Header file to use the vectors 
using namespace std;
int main(){

    vector<int> v ;  
    v.push_back(6) ;
    v.push_back(1) ;
    v.push_back(9) ;
    v.push_back(0) ;
    
    for ( int i = 0 ; i < 4 ; i++ ){
        cout << v[i] << " " ;
    }
    cout << endl;
    sort(v.begin(),v.end()) ;

     for ( int i = 0 ; i < 4 ; i++ ){
        cout << v[i] << " " ;
    }  
}