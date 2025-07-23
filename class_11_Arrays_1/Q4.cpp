// Find the element x in the array . Take array and x as input .
#include<iostream>
using namespace std;
int main(){
    cout << " Enter the size of array : " ;
    int n ;
    cin >> n ; 
    int arr[n] ;
    cout << " Enter the elements : " ;

    // input liya arr[] ke andar 
    for( int i = 0 ; i <= n-1 ; i++ ){
        cin >> arr[i] ;
    }

    cout << " Enter the number you have to check : " ;
    int x ;
    cin >> x ; 

    //Checkmark 
    bool flag = false ;

    // ab arr[] ka output le rhe hain 
    for( int i = 0 ; i <= n-1 ; i++ ){
        if ( arr[i] == x ) flag = true  ;

    }
        if ( flag == true ) cout << " Entered number is present " <<endl;
        else cout << " Error 404 not found " <<endl ;
    
}