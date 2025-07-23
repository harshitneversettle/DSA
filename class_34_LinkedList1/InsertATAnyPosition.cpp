// If ( idx == 0 ) insetrtAtBegenning 
// If ( idx == size ) insetrtAtend
// Traverse from 0 to idx-1 
// t->next = temp->next 
// temp->next = t ;


#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* next;
    Node(int value ){
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
        head = tail = NULL ;
        size = 0 ;
    }

    void InsertAtEnd(int value ){
        Node* temp = new Node(value) ;
        if( size == 0 ) head = tail = temp ;
        else {
            tail->next = temp ;
            tail = temp ;
        }
        size++ ;
    }

    void InsertAtBegenning(int value ){
        Node* temp = new Node(value) ;
        if( size == 0 ) head = tail = NULL ;
        else {
            temp->next = head ;
            head = temp ;
        }
        size++ ;
    }
    void AtanyPosition( int idx , int value ){
        Node* temp = new Node(value) ;
        if ( idx > size || idx < 0 ){
            cout << "invalid"  << endl ;
            return ;
        }
        if ( idx == 0 ){
            InsertAtBegenning(value ) ;
            return ;
        }
        else if ( idx == size ){
            InsertAtEnd(value ) ;
            return ;
        }
        else {
            Node* t = new Node(value) ;   // valyue to be added 
            Node* temp = head ;
            for( int i = 1 ; i <= idx-1 ; i++ ){
                temp = temp-> next ;
            }
            t->next = temp->next ;    // t ke nnext me temp ka next daal do mtlb temp ke aage wala 
            temp->next= t  ;      // temp ke next me t daal do 
            size++ ;

        }
    }
    void deleteatBeginning(){    // delete from begenning 
            if ( size == 0 ){
                cout << " Invalid " ;
                return ;
            }
            head = head->next ;
            size-- ;
        }

    void DeleteatEnd(){   // temp ka use krke last-1 tk jaao and then temp ko NULL se connect krdo 
        Node* temp = head ;
        if (size==0){
            cout << " Invalid " ;
            return ;
        }
        while ( temp->next != tail ){
            temp = temp->next ;
            }
            temp->next = NULL ;
            tail = temp ;
        size-- ;
    }

    void DeleteAtAnyIDX( int idx ){
        Node* temp = head ;
        if ( idx < 0 || idx >= size  ) {
            cout << " Invalid " ;
            return ;
        }
        // else if ( size == 0 ) deleteatBeginning(idx) ;
        // else if ( idx == size ) DeleteatEnd(idx) ;
        for ( int i = 1 ; i <= idx-1 ; i++ ){
            temp = temp->next ;
        }
        temp -> next = temp->next->next ;
        size-- ;
    }
    void display(){
        Node* temp = head ;
        while( temp != NULL ){
            cout << temp->value<< " " ;
            temp = temp->next ;
        }
    }
};
int main(){
    Linkedlist ll ;
    ll.InsertAtEnd(10) ;
    ll.InsertAtEnd(20) ;
    ll.InsertAtEnd(30) ;
    ll.InsertAtBegenning(40) ;
    ll.display() ;
    cout << endl ;
    ll.AtanyPosition(2,90) ;
    ll.display() ;
    cout << endl ;
    ll.deleteatBeginning() ;
    ll.display() ;
    cout << " End " ;
    cout << endl ;
    ll.DeleteatEnd() ;
    ll.display() ;
    cout << endl ;
    ll.InsertAtEnd(900) ;
    ll.display() ;
    cout << " at any " <<endl ;
    ll.DeleteAtAnyIDX(2) ;
    ll.display() ;

 
}