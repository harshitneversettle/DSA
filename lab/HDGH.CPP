// #include<iostream>
// using namespace std ;
// class swapper{
//     public:
//     void swap( int &a , int &b ){
//         a = a+b ;
//         b = a-b ;
//         a = a-b ;
//         return ;
//     }
// };

// int main(){
//     swapper A ;
//     int x = 2 ;
//     int y = 3 ;
//     A.swap(x,y) ;
//     cout << x << " " << y ;
// }




// Q2
// #include<iostream>
// using namespace std ;
// class Myclass {
//     public:
//     void display() ;
// };
// void Myclass::display(){
//     cout << " Hello Betichodo " ;
// }

// int main(){
//     Myclass obj ;
//     obj.display() ;
// }



// Q3




// Q4





// Q5
// #include<iostream>
// #include<string>
// using namespace std ;
// int findlength (string &str ){
//     int length = 0;
//     int i = 0 ;
//     while ( str[i] != '\0' ){
//         length++ ;
//         i++ ;
//     }
//     return length ;
// }
// int main(){
//     string str = " padhne wala gandu " ;
//     cout << findlength(str) ;
// }




// Q6
// #include<iostream>
// # define pi 3.14 
// using namespace std ;
// class circle {
//     private :
//     double radious ;
//     public:
//     // constructor ;
//     circle(double radious){
//         this -> radious = radious ;
//     }

//     double area(){
//         double ans = pi * radious * radious ;
//         return ans ;
//     }

//     double perimeter(){
//         double ans =  2 * pi * radious ;
//         return ans ;
//     }


// };
// int main(){
//     circle A(3) ;
//     cout << A.area() << endl  ;
//     cout << A.perimeter() ;
// }



// Q7

// #include<iostream>
// #include<string>
// using namespace std ;
// class student{
//     private:
//     string name;
//     string classname ;
//     int roll ;
//     int marks ;
//     public :
//     // constructor 
//     student(string name , string classname , int roll , int marks ){
//         this -> name = name ;
//         this -> classname = classname ;
//         this -> roll = roll ;
//         this -> marks = marks ;
//     }

//     void display(){
//         cout << name << " " << classname << " " << roll << " " << marks << endl ;
//     }
// };

// int main(){
//     student A( " Harshit " , " btech 1st year " , 30 , 20 ) ;
//     A.display() ;
// }





// Q8
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[] = { 1,2,2,3,4,5,6,6} ;
//     int n = sizeof(arr) / sizeof(arr[0]) ;
//     for( int i = 0 ; i <= n-1 ; i++ ){
//         for( int j = i+1 ; j <= n-1 ; j++ ){
//             if ( arr[i] == arr[j] ) {
//                 cout << arr[i] << endl ;
//             }
//         }
//     }
    
// }




// Q11

// #include<iostream>
// #include<string>
// using namespace std ;
// string  reverse( string& str , int i , int n ){
//     if ( i >= n ) {
//         cout << str[i] ;
//         return str ;
//     }
//     reverse(str, i+1 , n) ;
//     cout << str[i] ;
// }
// int main(){
//     string str = "harshit" ;
//     int n = str.size()-1 ;
//     cout << reverse( str , 0 , n ) ;
// }



// Q12 

// #include<iostream>
// using namespace std ;
// class hello{
//     public:
//     int value ;
//     int class1 ;

//     // constructor 

//     hello(int value){
//         this->value = value ;
//         cout << " Parameterised called !! "<< endl  ;
//     }

//     hello(){
//         value =  0 ;
//         cout << " Default constructor called " ;
//     }
//     int getvalue(){
//         return value ;
//     }
// };

// int main(){
//     hello A ;
//     hello B(10) ;
//     cout << A.getvalue() ;
//     cout << B.getvalue() ;
// }



#include<iostream>
using namespace std ;
class second ;
class first{
    public:
    int value ;
    public:
    void setvalue( int value ){
        this -> value = value ;
    }

    friend void max1( first a , second b ) ;
};

class second{
    public:
    int value ;
    public:
    void setvalue( int value ){
        this -> value = value ;
    }
    friend void max1(first a , second b ) ;
};

void max1( first a , second b ){
    if ( a.value >= b.value ) cout << a.value ;
    else cout << b.value ;
}
int main(){
    first A ;
    second B ;
    A.setvalue(20) ;
    B.setvalue(30) ;
     max1(A  , B ) ;
}