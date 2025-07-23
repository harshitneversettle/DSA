// LEETCODE (876) ;
// IMPORTANT INTERVIEW QUESTION 





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

int main(){
    Node *a = new Node(10) ;
    Node *b = new Node(20) ;
    Node *c = new Node(30) ;
    Node *d = new Node(40) ;
    Node *e = new Node(50) ;
    Node *f = new Node(30) ;

    
    a->next = b ;
    b->next = c ;
    c->next = d ;
    d->next = e ;
    e->next = f ;
    Node* temp = a ;
    int length = 0 ;
    while ( temp->next != NULL ){
        length++ ;
        temp = temp->next ;
    }
    int midIdx = length/2 ;
    Node* mid = a ;
    for ( int i = 1 ; i <= midIdx ; i++ ){
        mid = mid->next ;
    }
    cout << mid->value ;     // but interviewer not want this solution ... he wants to do it in one pass 
    cout << endl ;
    // For interviewer 
    // slow fast method 
    Node* slow = a ;   // a == head 
    Node* fast = a ;
    while ( fast != NULL && fast->next != NULL ){    // fast != NULL phele aayega agar dusre wale ko phrlr rakh diya jaaye toh runtime error aayega .... reason ye hai ki fast->next me agar fast == null ho gaya and NULL->next is nothing ... isliye error aayega
        slow = slow->next ;
        fast= fast->next->next ;
    }
    cout << slow->value ;

}