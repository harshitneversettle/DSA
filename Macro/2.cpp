#include<iostream>
#include<ctime>
using namespace std ;
int main(){
    cout << "           WELCOME TO CASSINO NUMBER GUESSING GAME         " ;
    cout << endl << endl;
    srand(time(0) ) ;
    int ans ;
    for ( int i = 0 ; i <= 9 ; i++ ){
        ans = rand() % (10-1+1) + 1 ;
    }
    cout << " Enter your difficulty level : " ;
    int n ;
    cin >> n ;
    if ( n == 1 ){
        bool flag = false ;
        cout << " You have a total of 5 chances " << endl ;
        int guess ;
        for( int i = 0 ; i <= 4 ; i++ ){
            cout << " Enter your guess : " ;
            int guess1 ;
            cin >> guess1 ;
            if ( ans == guess1 ){
                flag = true ;
                break ;
            }
            else {
                cout << "try again " << endl ;
            }
            guess = guess1 ;
        }
        if (flag == true) cout << " You win " << endl ;
        else cout << " You lost " << endl ;
        cout << endl << endl ;
        cout << " computer's choice : " << ans << endl ;
    }
    if ( n == 2 ){
        bool flag = false ;
        cout << " You have a total of 2 chances " << endl ;
        int guess ;
        for( int i = 0 ; i <= 1 ; i++ ){
            cout << " Enter your guess : " ;
            int guess1 ;
            cin >> guess1 ;
            if ( ans == guess1 ){
                flag = true ;
                break ;
            }
            else {
                cout << "try again " << endl ;
            }
            guess = guess1 ;
        }
        if (flag == true) cout << " You win " << endl ;
        else cout << " You lost " << endl ;
        cout << endl << endl ;
        cout << " computer's choice : " << ans << endl ;
    }
}

