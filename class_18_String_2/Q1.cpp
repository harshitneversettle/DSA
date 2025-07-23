// Input a string and return the number of times the neighbouring characters are different form each other 

#include<iostream>
using namespace std ;
int main(){
    string str = "abbsgggfdv" ;
    cout << str.size() << endl;
    int count = 0 ;
    if ( str.size() != 1 ){
    for( int i = 0 ; i <= str.size() -1 ; i++ ){
        if( str[i] != str[i-1] && str[i] != str[i+1] ){
            count++ ;
        }
    }
    cout << count << endl;
    }
    else cout << '0' ;
    
}