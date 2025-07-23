// BFS using queues 
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

void LevelOrder( Node* root ){
    queue<Node*> q ;
    q.push(root) ;
    while( q.size() > 0 ){
            Node* temp = q.front() ;
            cout << temp->value << " " ;
            if ( temp->left != NULL ) q.push(temp->left) ;
            if ( temp->right != NULL ) q.push(temp->right) ;
            q.pop() ;
        }
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

        LevelOrder(a) ;
}

