//Take a positive integer input and tell if it is divisible by 5 "and" 3
/*
#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int x ;
    cin >> x ;
    if (x % 5 == 0 &&  x % 3 == 0) {
        cout <<"The entered number is divisible by 3 and 5 " <<endl;
    }
    else {
        cout << "The number is not divisible by 3 and 5 " <<endl;
    }
}
*/

// Take a positive integer input and tell if it is divisible by 5 or 3

#include<iostream>
using namespace std;
int main (){
    cout <<" Enter a number : ";
    int x;
    cin >> x ;
    if ( x % 5 == 0 || x % 3 == 0){
        cout << "The entered number is divisible by 5 or 3" <<endl;
    }
    else {
        cout << "The entered number is not divisible by 5 or 3" <<endl;
    }
}


