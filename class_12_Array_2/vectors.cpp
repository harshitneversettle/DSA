#include<iostream>
#include<vector>            // Header file to use the vectors 
using namespace std;
int main(){

    vector<int> v ;  // Need not to enter the size of vectors 
    v.push_back(6) ;
    v.push_back(1) ;
    v.push_back(9) ;
    v.push_back(0) ;
    // While inserting / input donot use []

    // If we want to update update or access the vector , we can use []

    v[2] = 45 ;               // Here the vector of third index updated 
    cout << v[0] << " " ;
    cout << v[1] << " " ;
    cout << v[2] << " " ;
    cout << v[3] << " " ;
    
    
}