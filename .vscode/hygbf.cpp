#include<iostream>
using namespace std ;
class Node{
    public:
    int value ;
    Node* left ;
    Node* right ;
    Node(int value){
        this-> value = value ;
        this-> left = NULL ;
        this-> right = NULL ;
    }
};

void display(Node* root ){
    if ( root == NULL ) return ;   // base case
      // kaam 
    display( root->left ) ;    // calling 
    display( root->right ) ;
    cout << root -> value << " " ; 

}
int main(){
    Node* a = new Node(10) ;
    Node* b = new Node(20) ;
    Node* c = new Node(30) ;
    Node* d = new Node(40) ;
    Node* e = new Node(50) ;

    // connections 

    a->left = b ;
    a->right = c ;
    b->left = e ;
    b->right = d ;

    display(a) ;
}