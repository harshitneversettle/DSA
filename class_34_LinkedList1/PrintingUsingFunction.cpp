#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next ;

    Node (int value ){
        this -> value = value ;
        this -> next = NULL ; 
    }
};

// Function for printing 
void display( Node *temp){
    while( temp != NULL ){
        cout << temp-> value << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}


// Function for size ;
int size( Node * temp ){
    int n = 0 ;
    while( temp != NULL ){
        n++ ;
        temp = temp->next ;
    }
    return n ;
    cout << endl ;
}
void display1( Node* temp){
    if ( temp == NULL ) return ;
    cout << temp -> value << " " ;
    display1( temp->next ) ;
}
int main(){
    Node *a = new Node(10) ;
    Node *b = new Node(20) ;
    Node *c = new Node(30) ;
    Node *d = new Node(40) ;
    Node *e = new Node(50) ;
    
    a->next = b ;
    b->next = c ; 
    c->next = d ;
    d->next = e ;
    Node *temp = a ;
    display(a) ;

    // to finding size 
    cout << size( a) << endl ;

    // display using recursion 
    display1 (a);

}