#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std ;
class gun {
    public:
    int ammo ;
    int damage ;
    string name ;
};
class Player{
    private:
    int health ;
    int score ;
    bool alive ;
    gun playergun ;

    public:
    // setter 
    void setscore(int s){
        score = s ;
    }
    void sethealth ( int h ){
        health = h ;
    }
    void setalive( bool a ){
        alive = a ;
    }
    gun setgun ( gun g ){    // bahar ke object ka data type likhna hota hai
        playergun = g ;
    }
    // getter 
    int getscore(){
        return score ;
    }
    int gethealth(){
        return health ;
    }
    bool getalive(){
        return alive ;
    }
    gun getgun (){
        return playergun ;
    }
};
int main(){

    gun akm ;   
    akm.damage = 100 ;
    akm.ammo = 100  ;
    akm.name =  " AK47 ";

    gun awm ;
    awm.damage = 150 ;
    awm.ammo = 5 ;



    Player harshit ;
    harshit.setscore(100) ;
    harshit.setalive(true) ;
    harshit.setgun(akm) ;
    gun getgun123 = harshit.getgun() ;


    // cout << harshit.getscore() << endl ;
    // cout << harshit.getalive() << endl ;
    cout << getgun123.damage ;
    cout << getgun123.name ;
    cout << endl ; 

    Player *vijay = new Player ;   // dynamic allocatoion se bana hai new player 
    (*vijay).setscore(435) ;   // dynamic allocation me pointer use hota hai 
    cout << (*vijay).getscore() << endl  ;

    Player *harsh = new Player ;
    // harsh-> setscore(120) ;
    // cout << harsh->getscore() ;


}