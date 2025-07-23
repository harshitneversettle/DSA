// concept { 
//     REVERSE PART OF ARRAY :
// }

// Reverse a part of a array 
// 1 3 5 4 3 8 9     2 se leke 5 tk ke elements o reverse kro 

#include<bits/stdc++.h>
using namespace std ;
int main(){
    cout << " Enter the size of the array :  " ;
    int n ; 
    cin >> n ;
    cout << " Enter the elements of array : " ; 
    vector <int> v ;
    //  Taking input 
    for ( int i = 0 ; i < n ; i++ ){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;
    }
    cout << endl;
    for ( int i = 0 ; i <= v.size()-1 ; i++ ){
        cout << v[i] << " " ;
    }
    cout << endl;
    cout << " Enter the target to be reversed : " ; 
    int a , b ;
    cin >> a >> b ;
    for ( int i = a , j = b ;  i <= j ; i++,j-- ){
        int temp = v[i] ;
        v[i] = v[j] ;
        v[j] = temp ;
    }
    cout << endl ;
    for ( int i = 0 ; i <= v.size() -1  ; i++ ){
        cout << v[i] << " " ;
    }

    cout << endl;
}