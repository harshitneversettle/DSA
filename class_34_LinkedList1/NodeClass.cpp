#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next ;

    Node( int value ){
        this->value = value ;
        this->next = NULL ;
    }
};
int main(){

    // sbko 1 saath use krne ke liye constructor ka use hota hai 
    // Node a ;
    // a.value = 10 ;
    // Node b ;
    // b.value = 20 ;
    // Node c ;
    // c.value = 30 ;
    // Node d ;
    // c.value = 40 ;
    // // ab inko link krna hai 
    // a.next = &b ;
    // b.next = &c ;
    // c.next = &d ;
    // d.next = NULL ;

    Node a(10) ;
    Node b(20) ;
    Node c(30) ;
    Node d(40) ;
    // Abhi sbme NULL pada hai .... update krna padega 
    a.next = &b ;
    b.next = &c ;
    c.next = &d ;
    // d.next krne ki need nhi hai b/c usme phele se hi NULL pada hai 

    cout << a.next->value << endl  ; // a.next pe b ka adress pada hai ...or b->value == b ki value 

    Node temp = a ;   // Node temp me a ki saari cheeze daal di 
    while ( temp.next != NULL ){  // is loop se 40 proin tnhi hoga 
        cout << temp.value << " " ;
        temp = *(temp.next)  ;    // ex = phele temp me (a.next) mtlb b ka adress pada tha toh == (&b)
        // fir we have used de-reference operator * --> *(&b) = b 
    }
    cout << endl ;

    // is wale loop se puri linked list print hoi jayegi 
    while ( 1 ){   // while Loop ko infinite times chalane ke liye condition me 1 daal do   
        cout << temp.value << " " ;
        if ( temp.next == NULL ) break ;
        temp = *(temp.next)  ;  

    }




}