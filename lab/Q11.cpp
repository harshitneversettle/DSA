#include<iostream>
using namespace std ; 
int main(){
    cout << " Enter character : " ;
    char ch ;
    cin >> ch ;
    int n = (int)ch ;
    if ( n == 97 || n == 101 || n == 105 || n == 111 || n == 117 ) cout << " vowel " ;
    else cout << " consonent " ;

}
