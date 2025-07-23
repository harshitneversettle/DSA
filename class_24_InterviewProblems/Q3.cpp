// Find k closest element ( LEETCODE 658 )
// sbse phekle lower bound or upper bound nikalo and dono ka difference lo target se if dono equal 
// aaye toh dono me se jo chota hogaq voi consider karenge 

#include<iostream>
using namespace std ;
int main(){
   int arr[] = { 1,2,3,4,6 } ;
   int n = 5 ;
   int x ;
   cin >> x ;
   cout << " , " ;
   int k ; 
   cin >> k ;
   vector <int> v(k) ; // for storing the answer 
   // case 1 : if x < arr[0] ;
   if ( x < arr[0] ){
    for ( int i = 0 ; i <= k-1 ; i++ ){
        v[i] = arr[i] ;
    }
   }
   // case 2 : if ( x > arr[n-1] );
   if ( x > arr[n-1] ){
    for ( int i = n-1 ; i >= n-k-1 ; i-- ){
        v[i] = arr[i] ;
        sort(v.begin() , v.end() ) ;
    }
   }
   // case 3 ;



}
