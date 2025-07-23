#include<iostream>
using namespace std ;
class vehicle{    // Parent class
    public :
    int engine ;
    int lights ;
    int wheels ;
};

class Bike : public vehicle {   // Bike inherits vehicle 
    public:
    int handle ;
};

class Car : public vehicle {  // vehiclke se jo bhi variabke aaya vo car ke liye public hai 
    public:
    int steering ;
};
int main(){
    Bike royalenfield ;
    royalenfield.handle = 100  ;
    royalenfield.engine = 10 ;   // engine bike ki class me nhi hai ... fir bhi hum use use kr skte hain b/c vo main parent class ko inherit krta hai 
    cout << royalenfield.handle << endl ;
    cout << royalenfield.engine << endl ;
    

}
