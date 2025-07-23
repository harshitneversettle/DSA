#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next ;
    // constructor 
    Node(int value ){
        this -> value = value ;
        this -> next = NULL ;
    }
};
class LLasQueue{
    public:
    Node* head ;
    Node* tail ;
    int size ;
    LLasQueue(){
        head = NULL ;
        tail = NULL ;
        size = 0 ;
    }
    void push( int value ){
        Node* temp = new Node(value) ;
        if ( size == 0 ) head = tail = temp ;
        tail->next = temp ;
        tail = temp ;
        size++ ;
    }
    void pop1(){
        head = head->next ;
        size-- ;
    }
    int front(){
        return head->value ;
    }
    int back(){
        if ( size == 0 ) return 0 ;
        Node* temp = head ;
        while( temp != NULL ){
            if ( temp->next != NULL ) temp = temp->next ;
            else if (temp->next == NULL ) return temp->value ;
        }
    }
    void display(){
        Node* temp = head  ;   // display to head se hi karenge 
        while( temp != NULL ){
            cout << temp-> value << " " ;
            temp = temp-> next;
        }
    }
    
};
int main(){
    LLasQueue A ;
    A.push(10) ;
    A.push(20) ;
    A.push(30) ;
    A.push(40) ;
    A.push(50) ;
    A.display() ;
    cout << A.front() << endl  ;
    A.pop1() ;
    cout << A.front() << endl  ;
    cout << A.back() << endl ;
    cout << A.size ;
    

}