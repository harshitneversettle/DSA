// BoundaRY traversal

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
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

Node* print( int arr[] , int n ){
    queue<Node*> q ;
    Node* root = new Node(arr[0]) ;
    q.push(root) ;
    int i = 2 ;
    int j = 3 ;
    while( q.size() >0 && i <= n-1 ){
        Node* temp = q.front() ;
        q.pop() ;
        Node* l ;
        Node* r ;
        if ( arr[i] != INT_MIN ) l = new Node( arr[i] ) ;
        else l = NULL ;
        if ( j != n && arr[j] != INT_MIN ) r = new Node( arr[j] ) ;
        else r = NULL ;

        if ( l != NULL ) q.push(l) ;
        if ( r != NULL ) q.push(r) ;

        i+=2 ;
        j+=2 ;
    }
    return root ;
}
void leftboundary( Node* root ){
    if ( root == NULL ) return ;
    if ( root ->left == NULL && root->right == NULL ) return ;   //Leaf condition 
    cout << root->value << " " ;
    leftboundary(root->left) ;
    if ( root->left == NULL )leftboundary(root->right) ;

}
void bottomboundary( Node* root ){
    if ( root == NULL ) return ;
    if ( root ->left == NULL && root->right == NULL ) cout << root->value << " " ;
    bottomboundary(root->left) ;
    bottomboundary(root->right) ;
}
void rightboundary( Node* root ){
    if ( root == NULL ) return ;
    rightboundary(root->right) ;
    if ( root->right == NULL ) rightboundary(root->left) ;
    cout << root->value << " " ;
}

void Boundarytraversal(  Node* root ){
    leftboundary( root ) ;
    bottomboundary ( root ) ;   // leaaf 
    rightboundary(root->right) ;
}

int main(){
    int arr[] = {20, 8, 22, 4, 12, INT_MIN, 25, INT_MIN, INT_MIN, 10, 14} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    Node* root = print( arr , n ) ;
    Boundarytraversal(root) ;
 
}

