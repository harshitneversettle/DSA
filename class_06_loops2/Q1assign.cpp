// Write a programe to print the sum of all the even digits of a givin number .

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : ";
    int n ;
    cin >> n ;
    int i = 0 ;
    int lastdigit = 0 ;
    while ( n > 0 ){
        lastdigit = n % 10 ;
        if (lastdigit % 2 == 0) i = i + lastdigit ;
        n = n / 10 ;
    }
        cout << i <<endl;

}