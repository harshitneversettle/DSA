// write a function to determine the first and last digit of a number without returning anything 

#include<iostream>
using namespace std ;
int firstdigit(int n){
    while ( n > 9 ){
        n = n / 10 ;  

    }
        
    }

int lastdigit(int n ){
    int lastdigit = n % 10 ; 
}

int main(){
    cout << " Enter a number : " ;
    int n ; 
    cin >> n ;
    // For Lastdigit 
    cout << lastdigit(n) <<endl ;
    // For first digit 
    cout << firstdigit(n) <<endl;
    
}