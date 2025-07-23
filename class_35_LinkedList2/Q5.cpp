// delete nth node from the last 
// LEETCODE(19)
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
void deletelast ( Node* head , int n ){
        Node* temp = head ;
        int length = 0 ;
        while ( temp->next != NULL ){
            length++ ;
            temp = temp->next ;
        }
        int m = length - n +1 ;
        if ( n == length ){   // jb 1 hi element present ho or use hi remove krna hi 
            head = head->next ;
            return ;
        }
        int idx = m-1 ;  // idx to be deleted 
        for ( int i = 1 ; i <= idx - 1 ; i++ ){
            temp->next = temp->next->next ;
        }
        length-- ;
        return ;
    }
void display(Node* head ){
    Node* temp = head ;
    while ( temp->next != NULL ){
        cout << temp->value << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}
int main(){
    Node *a = new Node(10) ;
    Node *b = new Node(20) ;
    Node *c = new Node(30) ;
    Node *d = new Node(40) ;
    Node *e = new Node(50) ;
    Node *f = new Node(30) ;
    deletelast(a,3) ;   // head pass hua hai and 3rd node from the last delete krna hai 
    a->next = b ;
    b->next = c ;
    c->next = d ;
    d->next = e ;
    e->next = f ;
    display(a) ;
    
}


// For interviewer 
/*
using slow fast ;
phele loop me fast ko n+1 tk bhada do ...or dusre while loop me slow or fast dono jko 1-1 step bhadate 
raho ..
then slow is just left the element deleted from the last 

for ( int i = 0 ; i <= n-1;i++ ){
    if ( fast ==  NULL ) return head->next   // for the case of [1] and [1,2] == [1,2] wale me 2nd element from the last has to be removed 
    fast = fast->next ;
}
while ( fast!= NULL ){
    slow = slow->next ;
    fast = fast->next ;
}
slow ->next = slow->next->next ;
/*
