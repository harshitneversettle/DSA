// Trapping rain water ( leetcode 42 )  { very famous and important }
// step 1 = sbse phele previous greatest number find kro ;
// step 2 = uske baad next greatest number find kro ;
// step 3 = ab dono array o compare krke 1 third array banaao dono array ke respective number ko compare krte jao or jo chotta ho usko 3rd array me bharte jaao 
// step 4 = ab 3rd array me se 1st array ko minus krte jaao 

#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main(){
    vector <int> v ;   // v = height 
    v.push_back(0) ;
    v.push_back(1) ;
    v.push_back(0) ;
    v.push_back(2) ;
    v.push_back(1) ;
    v.push_back(0) ;
    v.push_back(1) ;
    v.push_back(3) ;
    v.push_back(2) ;
    v.push_back(1) ;
    v.push_back(2) ;
    v.push_back(1) ;
    int n = v.size() ;
    for (int i = 0 ; i <=v.size() -1 ; i++ ){
        cout <<  v[i] << " " ;
    }
    cout << endl;

    //step1 : find the previous greatest ;
    vector <int> v2(12) ;    // v2 ka size nhi de raha tah toh segmentation error aa raha tha 
    int max = v[0] ;
    v2[0] = -1 ;
    for (int i = 1 ; i <= v.size() -1 ; i++ ){
        v2[i] = max ;
        if ( max < v[i] ) max = v[i] ;
    }
    for (int i = 0 ; i <=v.size() -1 ; i++ ){
        cout << v2[i] << " " ;
    }
    cout << endl;

    // step 2 : find next greatest ;
    vector <int> v3(12) ;
    int max2 = v[n-1] ;
    v3[n-1] = -1 ;
    for (int i = n-2 ; i >= 0 ; i-- ){
        v3[i] = max2 ;
        if ( max2 < v[i] ) max2 = v[i] ;
    }
    for (int i = 0 ; i <=v.size() -1 ; i++ ){
        cout << v3[i] << " " ;
    }
    cout << endl;

    //step 3 : v2 or v3 ko compare krke 1 4th array banaao chotte element ko 4th array me dalo
    vector <int> v4 (12) ;
    for (int i = 0 ; i <= v.size() -1 ; i++ ){
        int k = min (v2[i] , v3[i]) ;
        v4[i] = k ;
    }
    for (int i = 0 ; i <=v.size() -1 ; i++ ){
        cout << v4[i] << " " ;
    }
    cout << endl; 

    // step 4 : v4 - v 
    int drop = 0 ;
    for ( int i = 0 ; i <= v.size() -1 ; i++ ){
        int final = v4[i] - v[i] ;
        if ( final >= 0 ){
            drop = drop + final ;
        }

    }
    cout << drop << " " ; 
    




}