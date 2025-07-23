// Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
double area(int n){
    return n * n * 3.14 ; 
   // cout << n ; 

}
int main(){
    cout << " Enter a number : " ;
    int n ; 
    cin >> n ; 
    cout << area(n) <<endl; 
}