#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next = NULL ;
    Node(int value){
        this-> value = value ;
        this-> next = NULL ;
    }
};
class Linkedlist{
    public:
    Node* head ;
    Node* tail ;
    int size ;
    Linkedlist(){ 
        head = tail =  NULL ;
        size = 0 ;
    }
    void InsertAtEnd ( int val ){
        Node* temp = new Node(val) ;
        if ( size == 0 ) head = tail =  temp ;
        else {
            tail->next = temp ;
            tail = temp ;
        }
        size++ ;
    }
    void display(){
    Node* temp = head ;
    while ( temp != NULL ){
        cout << temp->value << " " ;
        temp = temp->next ;
    }
}

};
int main(){
    Linkedlist ll ;
    ll.InsertAtEnd(10) ;
    ll.InsertAtEnd(20) ;
    ll.InsertAtEnd(30) ;
    ll.InsertAtEnd(40) ;
    ll.display() ;
    cout << ll.size ;
}
