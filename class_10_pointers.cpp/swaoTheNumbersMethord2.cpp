#include<iostream>
using namespace std;
void swap(int* n , int* m ){
    int temp = *n ;
    *n = *m ; 
    *m = temp ;
    return;
}
     
int main(){
    cout << " Enter 1st number : " ;
    int n ; 
    cin >> n ; 
    cout << " Enter  2nd number : " ;
    int m ; 
    cin >> m ; 
    swap ( &n , &m );
    cout << n << " " << m <<endl ; 

}