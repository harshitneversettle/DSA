/*      1
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 

  */

    

 #include<iostream>
 using namespace std ;
 int main(){
    cout << " Enter a number : " ;
    int n ;
    cin >> n ;
    int nsp = n - 1 ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= nsp ; j++ ){
            cout << " " ;
        }
        nsp-- ;
        for ( int k = 1 ; k <= 2*i-1 ; k++ ){
            cout << k ;
        }
        cout <<endl ;

    }
    
 }      