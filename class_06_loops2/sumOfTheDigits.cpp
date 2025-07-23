// write a digit to determine the sum of the digits of the input number 
// Hint : 1. kisi bhi number ki last digit nikalne ke liye number ko 10 se divide krdo 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int sum = 0 ;
    int lastdigit ;
    while ( n > 0 ){
       lastdigit = n % 10 ;
       sum = lastdigit + sum ;
       n = n / 10 ;          // iska samaj ni aaya hai 
    }
    cout << sum <<endl;
}