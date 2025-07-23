// Find the first non repeating element in an array 

#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector <int> v ;
    v.push_back(0) ;
    v.push_back(1) ;
    v.push_back(1) ;
    v.push_back(5) ;
    v.push_back(8) ;
    v.push_back(3) ;
    v.push_back(9) ;

    for (int i = 0 ; i <= v.size() -1 ; i++) cout << v[i] << " " ;
    cout << endl;

   for ( int i = 0 ; i <= v.size() -2 ; i++ ){
    for( int j = i+1 ; j <= v.size() -1 ; j++ ){
        if ( v[i] != v[j] ){
            cout << v[i] ;
        }
        break ;
    }


   }
   
}