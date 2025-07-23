// Score after flipping matrix  ( Leetcode 861 )
// step 1 : 0th column me all 1's la do rows ko flip krke jisme initially 0 present hai check kro ki 1st element 0 hai ki nhi ... agar 0 nhi hai toh flip krdo  
// step 2 : flip the columns where noz > noo ; 
// step 3 : har row me jaao or uska decimal value nikalo or sum variable me add krdo 

#include<iostream>
using namespace std ;
int main(){
    cout << " Enter the number of rows : " ;
    int n ;
    cin >> n ;
    cout << " Entre the number of columns : " ;
    int m ;
    cin >> m ;
    int arr[n][m] ;
    cout << " Enter the elements : " ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    cout << endl;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout <<endl;
    }
    cout << endl;

    // step 1 ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        if (arr[i][0] == 0 ){
            for ( int j = 0 ; j <= m-1 ; j++ ){
                if (arr[i][j] == 0) arr[i][j] = 1 ;
                else arr[i][j] = 1 ; 
            }
        }
    }
    // step 2 ; flip the columns where noz > noo ;
    int noz = 0 ; 
    int noo = 0 ;
    for ( int j = 0 ; j <= m-1 ; j++ ){
    for ( int i = 0 ; i <= n-1 ; i++ ){
        if ( arr[i][j] == 0 ) noz++ ;
        else noo++ ;
        }
        if ( noo < noz ){
        for ( int i = 0 ; i <= n-1 ; i++ ){
            if ( arr[i][j] == 0 ) arr[i][j] = 1 ;
            else arr[i][j] = 0 ;
        }
    }
    }
    int sum = 0 ;
    for ( int i = 0 ; i <= n-1 ; i++ ){
        int x = 1 ;
        for ( int j = 0 ; j <= m-1 ; j++ ){
            sum += arr[i][j] * x ;
            x *= 2 ;
        }
    }
    for ( int i = 0 ; i <= n-1 ; i++ ){
        for ( int j = 0 ; j <= m-1 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout <<endl;
    }

}

