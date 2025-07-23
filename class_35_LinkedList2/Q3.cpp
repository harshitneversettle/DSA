// LEETCODE (237) ;


// Delete Node of LL given only head not tail, Delete(head,target) ;


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
void display( Node *head){
    while( head != NULL ){
        cout << head-> value << " " ;
        head = head->next ;
    }
    cout << endl ;
}
void delete1(Node* target ){
    target->value = target->next->value ;
    target->next = target->next->next ;
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
    delete1(c) ;
    display(a) ;


}