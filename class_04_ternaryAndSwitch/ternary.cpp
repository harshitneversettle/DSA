#include<iostream>
using namespace std;
int main (){
    cout << " Enter an integer : " ;
    int x ;
    cin >> x ;
    /*if ( x % 2 == 0 ){
        cout << " Even " ;
    }
    else {
        cout << " ODD " ;
    }*/

    // by using ternary operator 
    // format :   condition ? True : False   { jaise yahan condition hai x %  2 }

    ( x % 2 == 0) ? cout << " Even " : cout << " Odd " ;
}