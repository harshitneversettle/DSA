#include<iostream>
using namespace std ;
void print(int arr[] ){
    cout << *arr[2] ;
    return ;
}
int main(){
    int arr[] = { 1,2,3,4 } ;
    print( &arr ) ;
}
