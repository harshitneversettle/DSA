// Swapp 2 numbers 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter 1st number : " ;
    int n ;
    cin >> n ; 
    cout << " Enter 2nd numner : " ;
    int m ; 
    cin >> m ;
    int temp = m ;  
    m = n ;   // m ke andar n ki value daalo 
    n = temp ;    
        cout << n << " " << m <<endl ;
}
