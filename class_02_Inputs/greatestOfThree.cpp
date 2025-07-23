#include<iostream>
using namespace std;
int main(){
    cout <<"Enter your 1st number : ";
    int x ;
    cin >> x ;
    cout <<"Enter your 2nd number : ";
    int y ;
    cin >> y ;
    cout <<"Enter your 3rd number : ";
    int z ;
    cin >> z ;
    if ( x > y && x > z ){
        cout << x;
        cout << " is greater among the three" <<endl;
    }
    if ( y > x && y > z ){
        cout << y ;
        cout << " is greatest among the three" <<endl;
    }
    if ( z > x && z > y)
    {
        cout << z ;
        cout << " is the greatst among the three " <<endl;

    }
}