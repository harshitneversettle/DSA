// Proof of \0 
#include<iostream>
using namespace std ;
int main(){
    string s = { 'a','b','c','d','e','f' } ;
    cout << s <<endl;
    cout << s[5] << endl;  //s[6] print krne pr error aa raha hai but typecast krne pr 0 aayega ascii
    cout << (int)(s[6]) <<endl;  // typecast krne pr 0 aa raha hai proof ho gaya \0 is present 
    cout << (int)(s[0]) << endl; // 97 print hoga as ascii of a ;
}