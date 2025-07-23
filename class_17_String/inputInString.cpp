// yaad rakho     getline(cin,string ka naam )    dikkt ye aa rhi thi ki cin space ko enter consider krta hai islie hum getline use krte hain 

#include<iostream>
using namespace std ;
int main(){
    string s ;
    getline(cin,s) ;
    cout << s ;
    cout << endl;
}