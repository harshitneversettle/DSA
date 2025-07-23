// sqrt(x) (LEETCODE 69)

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the target : " ;
    int target ;
    cin >> target ;
    int low = 0 ; 
    int high = target ;
    bool flag = false ;
    while ( low <= high ){
        int mid = (low + high) /2 ;
        if ( (mid*mid) == target ) {
            cout << mid ;
            flag = true ;
            break ;
        }
        else if ( (mid*mid) > target ) high = mid -1 ;
        else if ( (mid*mid) < target ) low = mid +1 ;
    }
    if ( flag == false ) cout << high ;

}