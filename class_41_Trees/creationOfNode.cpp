#include<iostream>
using namespace std ;
class Node{
        public: 
        int value ;
        Node* left ;
        Node* right ;
        Node( int value ){
            this -> value = value ;
            this->left = NULL ;
            this->right = NULL ;
        }
    };

void displayTree(Node* root ){
    if ( root == NULL ) return ;
    cout << root->value << " " ;
    displayTree( root->left ) ;
    displayTree( root->right ) ;
}
int main(){
        Node* a = new Node(1) ;   // root node 
        Node* b = new Node(2) ;
        Node* c = new Node(3) ;
        Node* d = new Node(4) ;
        Node* e = new Node(5) ;
        Node* f = new Node(6) ;
        Node* g = new Node(7) ;

        // Building connections 
        a->left = b ;
        a->right = c ;
        b->left = d ;
        b->right = e ;
        c->left = f ;
        c->right = g ;
        displayTree(a) ;  // Display function me root ko pass kiya hai 

}

