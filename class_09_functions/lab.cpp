#include<iostream>
using namespace std ;
int sub( int n , int m ){
    int a = n-m ;
    return a ;
}

int add( int n , int m ){
    int b = n+m ;
    return b ;
}

int multi( int n , int m ){
    int c = n*m ;
    return c ;
}
int divi( int n , int m ){
    float d = n/m ;
    return d ;
}
int mod( int n , int m ){
    float e = n/m ;
    return e ;
}
int main(){
    cout << " Enter a number : ";
    int n ;
    cin >> n ;
    cout << " Enter a number : " ;
    int m ;
    cin >> m ;
    cout << " Enter 1 for subtraction " << endl;
    cout << " Enter 2 for addition " << endl;
    cout << " Enter 3 for multiplication " << endl ;
    cout << " Enter 4 for division " << endl ;
    cout << " Enter 5 for modulus " << endl ;
    cout << " Enter your conversoion code : " ;
    int h ;
    cin >> h ;
    
    if ( h == 1 ){
        int subtraction = sub(n,m);
        cout << subtraction << endl ;
    }
    if ( h == 2 ){
        int addition = add(n,m);
        cout << addition << endl ;
    }
    if ( h == 3 ){
        int multiplication = multi(n,m);
        cout << multiplication << endl ;
    }
    if ( h == 4 ){
        float division = divi(n,m);
        cout << division << endl ;
    }
    if ( h == 5 ){
         int modulus = mod(n,m);
        cout << modulus << endl ;
    }
}