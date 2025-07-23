#include<iostream>
using namespace std;
int main(){
    cout << "Enter the principal amount : " <<endl;
    float a;
    cin >> a;
    cout << "Enter the rate : " <<endl;
    float b;
    cin >> b;
    cout << "Enter the time (in years) : " <<endl;
    float c;
    cin >> c;

    float simpleIntrest = (a * b * c )/100;
    cout << "Your simple intrest on your loan will be ";
    cout << simpleIntrest <<endl;
}