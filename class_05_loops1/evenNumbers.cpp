// Print all the even numbers between 1 to 100 

#include<iostream>
using namespace std;
int main (){
    for ( int i = 2 ; i <= 100 ; i = i + 2 ){
        if ( i % 2 == 0 ) {            // Jb ( i % 2 == 0 ) ho tbhi i ko print kro , ye humne 1 condition daal di hai .....
            cout << i <<endl ;       
    }
}
}