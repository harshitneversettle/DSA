#include<iostream>
using namespace std ;
class Player{
        private:
        int score ;
        public:
        // setter 
        void setScore(int s){
            score = s ; 
        }
        // getter 
        int getScore(){
            return score ;
        }
        int health ;
        string str[20] ;
    };
int main(){
    Player Titanic ;
    Titanic.setScore(100) ;
    Titanic.health= 100 ;
    cout << Titanic.health << endl ;
    cout << Titanic.getScore() ;
}

// Agar koi function private hai toh usko access krne ke liye setter or getter ka use hota hai 