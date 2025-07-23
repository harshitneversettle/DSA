// Print the factorial upto n ;

#include<iostream>
using namespace std ;
int fact(int n ){
    int fact = 1 ;
    for ( int j = 1 ; j <= n ; j++ ){
        fact = fact * j ;
    }
    return fact; 
    
}

int main(){
    cout << " Enter a number n : " ;
    int n ; 
    cin >> n ; 
    for ( int i = 1 ; i <= n ; i++ ){
        cout << fact(i) <<endl;
    }
    cout <<endl;


}