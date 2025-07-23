#include<iostream>
using namespace std ;
class ArrarStack{
    public:
    int arr[5] ;    // arr ka size apne according phele se hi dena padega 
    int idx ;
    // constructor 
    ArrarStack(){
        idx = -1 ;
    }
    void push ( int value ){
        if ( idx == 4 ){     // mtlb arr pura bhar chuka hai b/c indexing 0 se start hui hai 
            cout << " Stack overflow " << endl ;
        }
        idx++ ;
        arr[idx] = value ;
    }
    void pop(){
        if ( idx == -1 ){    // array pura khali hai .... tbhi idx++ nhi hua hai ... khali me se kya pop karoge 
            cout << " Stack underflow " << endl ;
            return ;
        }
        idx-- ;
    }
    int top(){
        return arr[idx] ;
    }
    int size(){
        return idx+1 ;
    }
    void display(){
        for( int i = 0 ; i <= idx ; i++ ){    // idx-1 isliye nhi huA b/c idx phele se hi ek km hai 
            cout << arr[i] << " " ;
        }
    }

};
int main(){
    ArrarStack A ;
    A.pop() ;
    A.push(100) ;
    A.push(200) ;
    A.push(300) ;
    A.push(400 ) ;
    cout << A.top() << endl ;
    cout << A.size() << endl ;
    A.display() ;


}
