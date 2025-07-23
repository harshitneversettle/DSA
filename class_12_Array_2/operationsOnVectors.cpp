#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(1) ;
    v.push_back(7) ;
    v.push_back(9) ;
    v.push_back(6) ;
    v.push_back(5) ;
    for ( int i = 0 ; i < v.size() ; i++ ){
        cout << v[i] << " " ;
    }
    cout <<endl;
    cout << v.size() << " " << v.capacity() << endl;
    v.pop_back() ;
    v.pop_back() ;
    v.pop_back() ;

    // pop back se neeche se element nikalte jaao 

    cout << v.size() << " " << v.capacity() << endl;

}