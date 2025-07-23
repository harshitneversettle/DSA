#include<iostream>
using namespace std ;
int main ( ){
    int x = 10 ;
    int* p = &x ;      // mene yahan pr p naam ke pointer me x ka address ko store kiya hai 
    cout << *p ;       /*k jb hum *p ko print krwate hain toh iska mtlb ye hai ki sbse phele 
    p pr jaao , p ke andar jo samaan pada hai ( x ka address ) us address pr jaao fir wahan j cheez padi hai usko uthaao or print krwa do */

}