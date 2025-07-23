// Print the tree breadth wise ..... means print nth level in a tree 

// find the levels of given binary tree 



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

void nthlevel(Node* root , int current , int level  ){
    if ( root == NULL ) return ;
    if ( current == level ) cout << root-> value << " " ;
    nthlevel( root ->left , current +1 , level  ) ;
    nthlevel( root ->right , current +1 , level ) ;

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
        for ( int i = 1 ; i <= 4 ; i++ ){
            nthlevel( a , 1 , i ) ;
        }
          // Display function me root ko pass kiya hai 
}

