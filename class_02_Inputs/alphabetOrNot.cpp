//Write a oprograme to check whether a character is an alphabet or not 
// very important 

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the number : ";
    char ch ;
    cin >> ch ;


    int ascii = (int)ch;
    if (ascii >= 97 && ascii <= 122 ){
        cout <<"The character is lowercase alphabet ";
    }
    if (ascii >= 65 && ascii <= 90){
        cout << "The character is uppercase alphabet";
    }
}