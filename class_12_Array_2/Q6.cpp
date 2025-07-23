// Rotate the given array 'a' by k steps, where k is non negative 
// Hint : Reverse part of array 
// step 1 : sbse phele reverse part ka 1 function banao 
// step 2 : Reversepart ( 0 , n-k-1 , v)
// step 3 : Reversepart ( n-k , n-1 )
// step 4 : Reversepart ( 0 , n-1 )

#include<bits/stdc++.h>
using namespace std ;
void Display ( vector <int>& a  ){
    for ( int i = 0 ; i <= a.size()-1 ; i++ ){
    cout << a[i] << " " ;
    }
    cout << endl;
}
void Reversepart ( int a , int b , vector <int> &v ){
    for ( int i = a , j = b ; i <= j ; i++ , j-- ){
        int temp = v[a] ; 
        v[a] = v[b] ;
        v[b] = temp ;
        return ;

    } 

}

int main(){
    cout << " Enter the size of array : " ;
    int m ; 
    cin >> m ; 
    cout << " Enter the elements of array : " ;
    vector <int> v ;
    for ( int i = 0 ; i < m ; i++){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;
    }
    // Printing of array 
    for ( int i = 0 ; i <= v.size()-1 ; i++ ){
    cout << v[i] << " " ;
    }
    cout << endl;

    // cout << " Enter the target to be reversed : " ;
    // int a,b ;
    // cin >> a >> b ;

    cout << " Enter the target value to be rotated : " ;
    int k ; 
    cin >> k ;

    int n = v.size() ;
    if ( k > n ) k = k % n ;

    //Reversepart( a , b , v ) ;
    Reversepart( 0 , n-k-1 , v) ;
    Reversepart( n-k , n-1 , v ) ;
    Reversepart( 0 , n-1 ,v ) ;
    Display(v) ;

    




}