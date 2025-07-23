// Sorting in sort function ius according to ASCII values 

#include<iostream>
#include<algorithm>
#include<string> 
using namespace std ;
int main(){
    cout << " Enter your string : " ;
    string str ;
    getline(cin,str) ;
    cout << str << endl ;
    sort ( str.begin() , str.end() ) ;
    cout << str << endl ;
}