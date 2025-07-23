#include<iostream>
using namespace std ;
int factorial(int n){
    if ( n == 1 || n == 0 ) return 1 ;
    int fact = 1 ;
    fact = n * factorial(n-1) ;
    return fact ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    cout << factorial(n) ;
}

#include<iostream>
using namespace std ;
int fibo(int n ){
    if ( n == 1 || n == 0 ) return n ;
    return fibo(n-1) + fibo(n-2) ;
}
int print ( int n , int i = 0 ){
    if ( i < n ){
        cout << fibo(i) << " " ;
        print(n , i+1) ;
    }
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    print(n) ;
}

#include<iostream>
using namespace std ;
int sum(int n , int s ){
    if( n == 0 ){
        cout << s ;
        return s ;
    }
    sum(n-1 , s+n ) ;
    return s ;
}
int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    sum(n , 0) ;
    return 0 ;
}



// #include<iostream>
// using namespace std ;
// int print(int n ){
//     if ( n == 0 ) return n ;
//     cout << print(n-1) << " ";
//     return n ;
// }
// int main(){
//     cout << " Enter a number : " ;
//     int n ;
//     cin >> n ;
//     print(n) ;
//     cout << n << " " ;
// }

// #include<iostream>
// #include<string>
// using namespace std ;
// int main(){
//     struct school{
//         int roll ;
//         string name[20] ;
//         int marks;
//     };
//     struct school student1 ;
//     student1.roll = 1 ;
//     student1.name[0] = "harshit" ;
//     student1.marks = 90 ;

//     struct school student2 ;
//     student2.roll = 2 ;
//     student2.name[0] = "animesh" ;
//     student2.marks = 91 ;


//     struct school student3 ;
//     student3.marks= 100 ;

//     cout << student2.marks << endl;
//     cout << student2.name[0] << endl; 
//     cout << student3.marks ;
// }