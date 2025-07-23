// Write a program to copy the contents of one array into another in the reverse order ( use pointers )

#include<bits/stdc++.h>
using namespace std ;
// void swap ( int* a , int* b){
//     int l = *a ;
//     int m = *b ;
//     int temp = *a ;
//     *a = *b ;
//     temp = *b ;
//     return ;

//}
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ; 
    cout << " Enter the elements of array : " ;
    vector <int> v ;
    for ( int i = 0 ; i < n ; i++){
        int q ; 
        cin >> q ; 
        v.push_back(q) ;
    }

   for ( int i = 0 , j = v.size()-1 ; i <= j ; i++ , j-- ){
    int temp = v[i] ;
    v[i] = v[j] ;
    v[j] = temp ;
   }
   for ( int i = 0 ; i <= v.size()-1 ; i++ ){
    cout << v[i] << " " ;
   }
   cout << endl;
}