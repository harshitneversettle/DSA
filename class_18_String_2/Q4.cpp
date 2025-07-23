// Given a sentence 'str' , return the word that is occuring most number of times in that sentence 

// Given n strings consisting of lowercase english alphabets . Print the charscter that is occurring most numeber of times ;

#include<bits/stdc++.h>
using namespace std ;
int main(){
    string str ;
    getline(cin,str) ;
    cout << str << endl;
    vector <string> v ;
    stringstream ss(str) ;
    string temp ;
    while ( ss>> temp ){
        v.push_back(temp) ;
    }
    
    sort(v.begin() , v.end() ) ;
    int maxc = 1 ;
    int count = 1 ;
    for (  int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] == v[i-1] ){
            count++ ;
        }
        else count = 1 ; 
        maxc = max(count,maxc) ;
    }
    // cout << maxc << endl;
    count = 1 ;
    for (  int i = 0 ; i <= v.size() -1 ; i++ ){
        if ( v[i] == v[i-1] ){
            count++ ;
        }
        else count = 1 ; 
        if ( maxc == count ){
            cout << v[i] << " " << maxc <<endl ;
        }
    }
}