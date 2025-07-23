// // tower of hanoi 
// #include<iostream>
// using namespace std ;
// void hanoi(int n , char A , char B , char C  ){
//     if ( n == 0 ) return ;
//     hanoi(n-1 , A , C , B ) ;
//     cout << A << " --> " << C << endl ;
//     hanoi(n-1, B , A , C ) ;
// }
// int main(){
//     cout <<" Enter n : " ;
//     int n ;
//     cin >> n ;
//     hanoi(n,'A' ,'B' , 'C') ;
// }


#include<iostream>
using namespace std ;
int x (int n ){
    if( n < 3 ) return 1 ;
    else return x(n-1) + x(n-3) + 1 ;
}
int main(){
    x(x(5)) ;
}