#include<iostream>
using namespace std ;
class A{    // Base class 
    private:
    int aPrivate ;   // cant be accessed or inherited 
    public:
    int aPublic ;    // can be accessed or inherited 
    protected:
    int aProtected ;  // cant be accessed but can be inheroited 
};

class B : private A {   // Derived class   mtlb a se jo bhi ayega usko private banado 
     
    // jb bhi derived class banti hai toh meri base class se public or protected uth ke aate hain bs .. private nhi 
};
int main(){
    A a ;
    // a.aPrivate = 100 ;    cant accessed from outside
    // cout << a.aPrivate << endl ;
    a.aPublic = 110;      //  accessed from outside
    cout << a.aPublic << endl ;
    // a.aProtected = 111 ;      cant accessed from outside
    // cout << a.aProtected << endl ;
}