#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next = NULL  ;
    Node (int value ){
        this -> value = value ;
        this -> next = NULL ;
    }
    
};
class LinkedList{  // LinkedList me 1 head hoga 1 tail or usk size hoga 
    public:
    Node* head ;     // Node type head == head me address or value dono padi hai 
    Node* tail ;
    int size ;
    LinkedList(){    // linkedList ka constructor hai 
        head = tail = NULL ;
        size = 0;
    }

    // actual function 
    void InstertAtBegenning ( int value ){
        Node* temp = new Node(value ) ;    // value add krmne ke liye hamesha use hoga 
        if ( size == 0 ) head = tail = temp ;
        else {
            temp -> next = head ;
            head = temp ;
        }
        size++ ;
    }

    void display(){
        Node* temp = head ;
        while ( temp != NULL ){
            cout << temp->value << " " ;
            temp = temp-> next ;
        }
    }
};
int main(){
    LinkedList ll ;
    ll.InstertAtBegenning(10) ;
    ll.InstertAtBegenning(20) ;
    ll.InstertAtBegenning(30) ;
    ll.InstertAtBegenning(40) ;
    cout << ll.size << endl  ;
    ll.display() ;


}