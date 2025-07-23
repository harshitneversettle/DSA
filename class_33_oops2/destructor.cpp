// constructor == object creation 
// destructor == object deletion 
// descructor call kb hota hai ?? == jb object out of scope chala jata hai 
// destructor me paramener nhi dete hain 
// jahan bhi object ka scope khatam hota hai wahan destructor call ho jata hai


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

    // destructor 
    ~Bike (){
        cout << " Destructor call hua hai " << endl  ;
    }
};

int main(){
    Bike tvs ( 100 ) ;   // object creation ho rhi hai  // constructor ko call jayega ;
    cout << tvs.speed << endl ;
    bool flag = true ;
    if ( flag == true ){
        Bike BMW(100) ;
        cout << BMW.speed << endl ;
    }    
    Bike Royalenfield(150) ;
    cout << Royalenfield.speed << endl ;
    
}



