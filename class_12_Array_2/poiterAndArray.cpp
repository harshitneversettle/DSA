#include<iostream>
using namespace std;
int main(){
    int arr[] = { 1,2,3,4,5 } ;
    int* ptr = arr;           // array ke first element ka address humne isme print krwa diya hai ( main yhi use krna hai )
    cout << ptr <<endl;
    int* ptr2 = &arr[0] ;     // agar arr ko 1 pointer me store krwna hai to uske 2 method hain     &arr[0] , &arr          arr[0] , &arr ye dono galat tareeka h
    cout << ptr2 <<endl;
    cout << *ptr <<endl;     

    cout << ptr[1] <<endl;    // ye array print krne ka 11 tareeka hai 

    // ptr[3] = 0 ;              // pointer se hum pure array ko access kr skte hain...

    for ( int i = 0 ; i <= 4 ; i++ ){
        cout << ptr[i] << " " ;
    }
    cout << endl;
    *ptr = 7 ;       // *ptr = 8  or  *ptr = 7   ye dono ka mtlb same hota hai
    
    for ( int i = 0 ; i <= 4 ; i++ ){
        cout << ptr[i] <<" " ;
    }

}