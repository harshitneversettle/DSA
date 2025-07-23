// merge two sorted array 
#include<iostream>
#include<vector>
using namespace std ;
void merge( vector <int> &a , vector <int> &b , vector<int> &res ){
    int i = 0 ; 
    int j = 0 ; 
    int k = 0 ;
    while ( a.size() == b.size() ){
        if ( a[i] < b[j] ){
            res[k] = a[i] ;
            i++ ;
            k++ ;
        }
        else {
            res[k] = b[i] ;
            j++ ;
            k++ ;
        }
        if ( i > a.size() ){
        res[i] = b[i] ;
        }
        if ( j > b.size() ){
        res[i] = a[i] ;
        }
        
    }
    for( int i = 0 ; i <= res.size() -1 ; i++ ){
        cout << res[i] ;
    }
    return ;
    
}
int main(){
    int arr[] = { 1,2,3,4 } ;
    int n1 = sizeof(arr) / sizeof(arr[0]) ;
    int brr[] = { 6,7,8,9,20,80 } ;
    int n2 = sizeof(brr) / sizeof(brr[0]) ;
    vector <int> a(arr , arr+n1) ;
    cout << a[3] ;
    vector <int> b(brr , brr+n2) ; 
    vector <int> res(n1+n2) ;
    merge(a,b,res) ;

}
