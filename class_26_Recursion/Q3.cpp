// MAZE path 
//  only down and right 

#include<iostream>
using namespace std ;
int maze ( int sr , int sc , int er , int ec ){
    // base case 
    if ( sc>ec || sr>er ) return 0 ;    // jb row ya column exceed kr jaaye
    if ( sc== ec && sr == er ) return 1 ;
    // kaam 
    int rightchoice = maze(sr , sc+1 , er , ec ) ;   // jb right jayenge to column+1 hoga baki sb as it is 
    int downchoice = maze(sr+1 , sc ,er ,ec ) ;     // jb down jayenge tb row+1 hogi baki sb as it is 
    int totalways = rightchoice + downchoice ;
    return totalways ;
}
int main(){
    cout << maze(1,1,3,3) ;    // (1,1) se start krna hai or (3,3) pr end krna hai 
}