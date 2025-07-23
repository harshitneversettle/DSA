// Q1 count the number of triplets whose sum is equal to the given value x .

#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector <int> v ;
    v.push_back(5) ;
    v.push_back(1) ;
    v.push_back(0) ;
    v.push_back(2) ;
    v.push_back(4) ;
    v.push_back(3) ;

    for (int i = 0 ; i <= v.size() -1 ; i++ ){
        cout << v[i] << " " ;
    }
    cout <<endl;

    cout << " Enter the number to be checked : " ;
    int x ;
    cin >> x ;
    int count = 0 ;
    for ( int i = 0 ; i <= v.size() - 3 ; i++ ){
        for ( int j = i+1 ; j <= v.size()  -2 ; j++ ){
            for ( int k = j+1 ; k <= v.size() -1 ; k++ ){
                if ( (v[i] + v[j] + v[k])  == x ){
                    count = count + 1 ;
                }
            }
        }
    }

    cout << count << endl ;
}