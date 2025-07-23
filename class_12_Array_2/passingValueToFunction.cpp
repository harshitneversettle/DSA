#include<bits/stdc++.h>
using namespace std;
void change( vector<int> &a ){    // Yahan jo a vector hai vo bilkul naya hai or usme v ki saari values copy hui hain a=95683
    a[0] = 100;                  // Yahan a ki 0th value chane ho gai hai or vo 100 bn gai hai 

    // Printing of change function 
    for ( int i = 0 ; i < a.size() ; i++){
        cout << a[i] << " " ;
    }
    cout <<endl;
}

int main(){
    vector<int> v ;
    v.push_back(9) ;
    v.push_back(5) ;
    v.push_back(6) ;
    v.push_back(8) ;
    v.push_back(3) ;

    //Printing of original vectrs 
    for ( int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " ;
    }
    cout << endl;

    // Sorting of the vector 
    // sort( v.begin() , v.end()) ;
    // for ( int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << " " ;
    // }
    // cout <<endl;

    // Calling of change function 
    change(v) ;
     for ( int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " ;
    }
    cout<<endl;
}

// agar & laga ke calling krte ho to a ke andar v ka pura adress chale jata hai mtlb a a ke andar pura v aa jata hai isliye jb a[0] = 100 kiya hai toh v ka 1st index hi pura change ho gaya hai 