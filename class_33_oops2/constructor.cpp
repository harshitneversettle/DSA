// Jb bhi hum koi objecty banate hain toh constructor ko call jata hai 
// constructor khud compiler ka default hota hai .... hum bhi apna khud ka 1 constructor bana skte hain
// constructor ka koi naam nhi hogtga and vo hamesha object hi return karega 
// constructor ka return type hamesha class type hota hai 


#include<iostream>
using namespace std ;
class Bike {
    public:
    int speed ;

    // Yahan hum apna khud ka constructor bana rhe hain
    Bike ( int b ){
    cout << " constructor call hua !! " << endl ;
    speed = b ;
    }
};


int main(){
    Bike tvs ( 100 ) ;   // object creation ho rhi hai  // constructor ko call jayega ;
    cout << tvs.speed << endl ;
    Bike Royalenfield(150) ;

    cout << Royalenfield.speed ;
    
}