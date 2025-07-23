// stoi == string to integer conversion krta hai 
// stoll == string to long long conv ersion krta hai 

#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "1234567" ;
    // int x = stoi(str) ;
    // cout << x << endl ;
    // // proof ki sach me store hua hai .... x+1 
    // x = x + 1 ;
    // cout << x << endl;

    string str = "123456789876543" ;
    long long x = stoll(str) ;
    cout << x << endl;
}