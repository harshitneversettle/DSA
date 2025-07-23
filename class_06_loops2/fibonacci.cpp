// Print the nth fibonacci number 

#include<iostream>
using namespace std;
int main(){
    cout << " Enter a number :" ;
    int n ;
    cin >> n ;
    int a = 1 ;
    int b = 1 ;
    int sum = 0 ;
    for ( int i = 1 ; i <= n - 2  ; i++){       // nth fibonacci nikalne ke lye loop ko n-2 baar chalana padta hai
        sum = a + b ;
        a = b ;
        b = sum ;
    }
    cout << sum <<endl;
}
