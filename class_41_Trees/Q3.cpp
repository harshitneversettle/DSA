// Find the max of the tree

#include<iostream>
#include<bits/stdc++.h>
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

int maxTree( Node* root ){
    if ( root == NULL ) return INT_MIN ;   // 0 isliye nhi nhi kiya b/c values -ve bhi ho skti hain
    int n = max( maxTree(root->left) , maxTree(root->right) ) ;
    return max(root->value , n ) ;
}
int main(){
        Node* a = new Node(1) ;   // root node 
        Node* b = new Node(2) ;
        Node* c = new Node(3) ;
        Node* d = new Node(4) ;
        Node* e = new Node(5) ;
        Node* f = new Node(61) ;
        Node* g = new Node(7) ;

        // Building connections 
        a->left = b ;
        a->right = c ;
        b->left = d ;
        b->right = e ;
        c->left = f ;
        c->right = g ;
        cout << maxTree(a) ;  // Display function me root ko pass kiya hai 
}

