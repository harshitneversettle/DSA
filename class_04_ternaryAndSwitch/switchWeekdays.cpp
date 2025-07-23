// Write a programe to input month number and print total number of days in month using switch case ......

#include<iostream>
using namespace std ;
int main (){
    int x ;
    cout << " Enter an integer : ";
    cin >> x ;
    switch ( x ) {
    case 1 :
        cout << " Monday " ;
        break ;
    case 2 :
        cout << " Tuesday " ;
        break ;
    case 3 :
        cout << " Wednesday " ;
        break ;
    case 4 :
        cout << " Thursday " ;
        break ;
    case 5 :
        cout << " Friday " ;
        break ;
    case 6 : 
        cout << " Saturday " ;
        break ;
    case 7 :
        cout << " Sunday " ;
        break ;

        default :
            cout << " The entered integer is beyond the range " ;
    }
    
        
}
