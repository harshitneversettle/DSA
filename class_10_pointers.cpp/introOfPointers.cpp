#include<iostream>
using namespace std;
int main(){
    int x = 5 ;
    int y = 2 ;
    int *p = &x;
    int *l = &y ;
    cout <<&x<<" "<< p<<endl<< &y << " " <<l<<endl;
}