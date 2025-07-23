// Write a programe to print the sum of all the even digits of a given number 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : ";
    int n ;
    cin >> n ;
    int i = 0 ;
    int lastdigit ;
    int original = n ;  // entered integer ko 1 naye variable me daal diya hai
    while( n > 0 ){
        i = i * 10 ;
        lastdigit = n % 10 ;
        i = i + lastdigit ;
        n = n / 10 ;
    }
        int sum = original + i ;
        cout << sum <<endl;
}