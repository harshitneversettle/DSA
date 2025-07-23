// Print all the alphabets ( Uppercase ) with their ascii values.....

#include<iostream>
using namespace std;
int main(){
    int i = 65 ;
    char ch ;
    while ( i <= 90 ){
        cout << i << " "<< (char)i <<endl;
        i++;
    }

}