// Write a programe to print all the ascii values and their equivalent charactes of 26 alphabets using a while loop .

#include<iostream>
using namespace std;
int main(){
    int i = 65 ;
    while ( i <= 90 ){
        cout << i << " " << (char)i <<endl;   // Yahan typecasting hui hai
        i++;
    }
}