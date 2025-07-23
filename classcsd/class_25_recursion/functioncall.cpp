#include<iostream>
using namespace std ;
int sir(){
    cout << " Hello cw " ;
    return 0 ;
}
int fun(){
    cout << " Hello world " ;
    sir();
    return 0 ;
}
int main(){
    fun() ;
}
