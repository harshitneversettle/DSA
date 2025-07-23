#include<iostream>
using namespace std;
int main(){
    void display(int a[]){
        for(int i = 0 ; i<=4 ; i++){
            cout << a[i] <<" " ;
        }
        return;
    }
    int main (){
    int arr[] = {1,4,2,7,4} ;
    // accessing the element of array in another function 
    // updation, pass by value /function 
    display() ;
}
}