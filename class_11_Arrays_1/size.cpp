// Humne array me bhut saare number daal diye hain toh hume use count krna hai toh sizeof ka use hota hai 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,5,1,5,1,5,65,5,55,5} ;
    int size = sizeof(arr) / sizeof(arr[6]) ;
    cout << size ;

}