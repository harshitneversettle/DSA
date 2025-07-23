// Display this AP- 1,3,5,7,9..... upto 'n' terms 

// nth = a + ( n - 1 ) * d 
// a = 1 d = 2    => nth = 2n - 1 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= (2 * n - 1) ; i = i + 2 ){
        cout << i <<endl;
    }

}