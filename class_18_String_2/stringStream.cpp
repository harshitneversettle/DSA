// stringstream .... agar mereko 1 sentence me se number of words alag alag print krwana hai toh ye use hota hai 

#include<iostream>
#include<string>
#include<sstream>   // Header file for using string stream
using namespace std ;
int main(){
    string str = " My name is harshit yadav " ;
    stringstream ss(str) ;
    string temp ;     // Ye syntax hai .... hume 1 dabba banana padta hqi store krne ke liye 
    while( ss>> temp){      // temp se input lena padega ..... syntax hai 
        cout << temp << endl;
    }
}
