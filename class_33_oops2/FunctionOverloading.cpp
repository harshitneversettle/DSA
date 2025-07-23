// jb 1 hi naam ke 2 ya 2 se jada functions ho....hum 2 same naam ke functions use kr skte hain bs unke parameters alag krne hain 

#include<iostream>
using namespace std ;
int add( int a , int b ){
    cout << a + b << endl ;
}
int add( int a ){
    cout << 10 + a ;
}
int main(){
    add(2,3) ;
    add(2) ;
}