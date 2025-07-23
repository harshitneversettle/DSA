// Given an aray of marks of students , if the marks of any student is less than 35 print its roll number [ rol number refers to the index of the array ].....  
// question ka mtlb ye hai ki 6 baccho ke marks diye haun toh un baccho ke roll number print kr do jinke marks 35 se kam hai ....

#include<iostream>
using namespace std;
int main(){
    cout << " Enter number of sutudents :  " ;
    int n ;
    cin >> n ; 
    int marks[n] ;
    // input
    cout << " Enter the marks obtained : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        cin >> marks[i] ;
    }

    for ( int k = 0 ; k <= n-1 ; k++ ){
    if ( marks[k] < 35) cout << k <<" " ;

    }
}