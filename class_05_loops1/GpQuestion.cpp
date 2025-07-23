// Display this GP - 1,2,4,8,16,32,.... upto 'n' terms .

#include<iostream>
using namespace std;
int main (){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int a = 4 ;
    for ( int i = 1 ; i <= n ; i++ ){
        cout << a <<endl;
        a = a * 2 ;
    }
}