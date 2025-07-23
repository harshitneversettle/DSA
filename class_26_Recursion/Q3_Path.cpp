// Main function ka path print kro 

// #include<iostream>
// #include<string>
// using namespace std ;
// void printpath ( int sr , int sc , int er , int ec , string s ){
//     // base case 
//     if ( sc>ec || sr>er ) return ;    
//     if ( sc== ec && sr == er ){
//         cout << s << endl ;
//         return ;
//     }
//     // kaam 
//     printpath(sr , sc+1 , er , ec , s +'R' ) ;   
//     printpath(sr+1 , sc ,er ,ec , s +'D' ) ;   
// }   
// int main(){

//     printpath(1,1,3,3,"") ;    
// }



// hum yahan 4 variable bhej rhe hain .... kaam 2 se bhi ho skta hai 

#include<iostream>
using namespace std ;
int maze ( int er , int ec ){
    // base case 
    if ( ec == 1 || er == 1 ) return 1 ;    
    //if ( sc== ec && sr == er ) return 1 ;
    // kaam 
    int rightchoice = maze(er , ec-1  ) ;   
    int downchoice = maze(er-1 , ec ) ;    
    int totalways = rightchoice + downchoice ;
    return totalways ;
}
int main(){
    cout << maze(3,3) ;  
}