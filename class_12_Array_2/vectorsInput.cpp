#include<iostream>
#include<vector>            
using namespace std;
int main(){
    cout << " Enter the size of array : " ;
    int n ; 
    cin >> n ; 
    vector<int> v ; 

    // Taking inputs 
    for ( int i = 0 ; i < n ; i++){
        int x ; 
        cin >> x ;
        v.push_back(x) ;
    }

    // For printing 
    for ( int i = 0 ; i < n ; i++ ){
        cout << v[i] << " " ;
    } 
}
