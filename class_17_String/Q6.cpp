// Return the total number of digits in a numbr without using any loop 
// Hint : Try using to_string() function ;

#include<iostream>
using namespace std  ;
int main(){
    int n = 123456789 ;
    string str = to_string(n) ;
    cout << str << endl ;
    cout << str.size() << endl ;   
}