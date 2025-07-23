// Find the sum of the tree

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

int TreeSum( Node* root ){
    if ( root == NULL ) return 0 ;
    return root->value + TreeSum(root->right) + TreeSum(root->left) ;
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
        cout << TreeSum(a) ;  // Display function me root ko pass kiya hai 
}

