// sub array
// Will work only in unique element questions 

#include<iostream>
#include<vector>

using namespace std ;
void subarray( vector <int> v , int arr[] , int n , int i ){
    if ( i == n ){
        for ( int i = 0 ; i <= v.size()-1 ; i++ ){
            cout << v[i] ;
        }
        cout << endl ;
        return ;
    }
    subarray( v,arr,n,i+1) ;   // khali wali calling 
    // // Include current element if v is empty or the current element is equal to the last element in v
    if ( v.size() == 0 || arr[i-1] == v[v.size()-1] ){
        v.push_back(arr[i]) ;
        subarray( v,arr,n,i+1) ;
    }
     

}
int main(){
    int arr[] = { 1,2,3,4 } ;
    int n = sizeof(arr)/ sizeof(arr[0]) ;
    vector <int> v ;
    subarray( v , arr , n , 0 ) ;
}