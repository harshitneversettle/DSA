#include<iostream>
#include<string>
using namespace std ;
int main(){
    string str ;
    cin >> str ;

    
    int hash[26] ={0} ;
    for( int i = 0 ; i <= str.size()-1 ; i++ ){
        hash[str[i] - 'a'] += 1 ;   // hash me bs int store hita hai toh vo apne aap ko auto cast kr leta hai 
    }

    cout << " number of targets : " ;
    int q ;
    cin >> q ;
    cout << " Enter targets : " ;
    int i = 0 ;
    while( i!=q ){
        char character ;
        cin >> character ;
        cout << hash[character - 'a'] << " " ;
        i++ ;
        
    }
    
}