#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    struct book {
        int accession ;
        string name[200] ;
        string booktitle[200] ;
        bool flag = false ;    // false means not issued ;
    };
    for( int i = 0 ; i <= 2-1 ; i++ ){
        struct book b[i] ;
        b[i].accession = 1 ;
        b[i].name[0] = "Harshit " ;
        b[i].booktitle[0] = "Computer programming "  ;
        b[i].flag = true ;
    }
    // struct book b1 ;
    //     b1.accession = 1 ;
    //     b1.name[0] = "Harshit " ;
    //     b1.booktitle[0] = "Computer programming "  ;
    //     b1.flag = true ;
    cout << b1.accession << endl ;
    cout << b1.name[0] << endl ;
    cout << b1.booktitle[0] << endl ;
    cout << b1.flag ;
    
}