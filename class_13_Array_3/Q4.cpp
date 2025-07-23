// Leetcode 88 ( Homework ) 
// merge two sorted arrays 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

using namespace std ;
int main(){
    vector <int> v ;      // v ir v2 ka size declare nhi kiya toh question solve ho gaya 
    vector <int> v2 ;
    v.push_back(0) ;
    v.push_back(3) ;
    v.push_back(5) ;
    v.push_back(7) ;

    v2.push_back(0) ;
    v2.push_back(2) ;
    v2.push_back(4) ;
    v2.push_back(6) ;
    v2.push_back(8) ;
    v2.push_back(9) ;
    vector <int> v3(10) ;
    int i = 0 ;   // for array 1 
    int j = 0 ;   // for array 2 
    int k = 0 ;   // for new array 
    while ( i < 4 && j < 6 ){
        if (v[i] <= v2[j]) {
            v3[k] = v[i] ;
            i++ ;
        }
        else {
            v3[k] = v2[j] ;
            j++ ;
        }
        k++ ;
    }
    // v ke saare elements bhar gye ho 
       while ( i < 4 ){
        v3[k] = v[i] ;
        i++ ;
        k++ ;
    }
     // v ke saare elements bhar gye ho 
       while ( j < 6 ){
        v3[k] = v2[j] ;
        j++ ;
        k++ ;
       }
    for (int i = 0 ; i < 10 ; i++ ){
        cout << v3[i] << " " ;
    }

}
     
