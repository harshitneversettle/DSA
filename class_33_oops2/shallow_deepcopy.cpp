// copy constructor hamesha call by reference se jata hai == Bike( & Bike )
#include<iostream>
using namespace std ;
class Bike{
    public:
    int speed ;
    int tyre ;

    // constructor
    Bike ( int a , int b ){
        speed = a ;
        tyre = b ;
    }
    Bike (){
        speed = 0 ;
        tyre = 0 ;
    }
}; 
int main(){
    Bike b1(50,100) ;
    cout << b1.speed << endl  ;
    Bike b2;  // b2 ko bina arguments ke paas kr rhe hain to iske liye parameterised constructor nhi chalega .... default constructor banana padega 
    b2 = b1 ; // shallow copy == j change hum b1 me karenge sqame change b2 me bhi ho jayega 
    cout << b2.tyre << endl  ;


    Bike b3(b1) ;  // copy constructor is used === deep copy use hota hai in copy constructor 
    cout << b3.speed << endl ;
    Bike b4 = b1 ;  // another method for copy constructor 
    cout << b4.tyre << endl ;
}