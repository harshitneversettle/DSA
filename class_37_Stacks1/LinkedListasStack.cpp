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
class LLasStack{
    public:
    Node* head ;
    int size ;
    LLasStack(){
        head = NULL ;
        size = 0 ;
    }
    void push( int value ){
        Node* temp = new Node(value) ;
        temp->next = head ;
        head = temp ;
        size++ ;
    }
    void pop(){
        head = head->next ;
        size-- ;
    }
    int top(){
        return head->value ;
    }
    
};
int main(){
    LLasStack A ;
    A.push(10) ;
    A.push(20) ;
    A.push(30) ;
    A.push(40) ;
    cout << A.top() << endl  ;
    cout << A.size ;

}