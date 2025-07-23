// Write a programe to creat a calculator that performs basic arithmatic operations ( add subtract divide multiply ) usimg switch case and functions . The calculator should input two numbers and an operator from user .

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter your problem : ";
    int a ;
    //cin >> a ;
    char ch ;
    //cin >> ch ;
    int b ;
    cin >> a >> ch >> b ;        // cin left to right inputs ko dekht hai isliye input left to right liye hain 
    switch ( ch ) {
        case '+' :         // ' x ' me error bata raha tha isliye 'x' ka use hua hai 
            cout << a + b ;
            break ;
        case '-' :
            cout << a - b ;
            break ;
        case '*' :
            cout << a * b ;
            break ;
        case '/' :
            cout << a / b ;
            break ;
    }
}

