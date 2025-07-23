                 // Number system calculator 

// for m = 1 ---> octal to decimal 
// for m = 2 ---> binary to decimal 
// for m = 3 ---> hexadecimal to decimal 
// for m = 4 ---> decimal to binary 
// for m = 5 ---> decimal to octal 
// for m = 6 ---> decimal to hexadecimal 
// for m = 7 ---> binary to octal ( only 6 digits binary number )
// for m = 8 ---> binary to hexa decimal ( only 8 digits binary number )
// for m = 9 ---> octal to hexa decimal 
// for m = 10 ---> 1's compliment 





#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std ;
int main(){
    cout << " Enter your conversion code : " ;
    int m ;
    cin >> m ;
    if ( m==1 || m==2 || m == 3 ) {
        cout << " Enter the number of digits : " ;
        int n ;
        cin >> n ;
        int arr[n] ;
        cout << " Enter your number : " ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cin >> arr[i] ;
        }
        if ( m == 1 ){
            int ans = 0 ;
            int c = 1 ;
            for ( int i = n-1 ; i >= 0 ; i-- ){
                ans = ans + ( arr[i] * c ) ;
                c = c * 8 ;
            }
            cout << ans << endl ;
        }
        if ( m == 2 ){
            int ans = 0 ;
            int c = 1 ;
            for ( int i = n-1 ; i >= 0 ; i-- ){
                ans = ans + ( arr[i] * c ) ;
                c = c * 2 ;
            }
            cout << ans << endl ;
        }
        if ( m == 3 ){
            int ans = 0 ;
            int c = 1 ;
            for ( int i = n-1 ; i >= 0 ; i-- ){
                ans = ans + ( arr[i] * c ) ;
                c = c * 16 ;
            }
            cout << ans << endl ;
        }
    }
    if ( m == 4 || m == 5 ||m == 6 ){
        cout << " Enter number of digits : " ;
        int p ;
        cin >> p ;
        cout << " Enter your number : " ;
        int n ;
        cin >> n ;
        if ( m == 4 ){
            int arr[p] ;
            for ( int i = 0 ; i <= 6 ; i++ ){
                    int c = n % 2 ;
                    arr[i] = c ;
                    n = n / 2 ;
            }
            for ( int i = 6 ; i >= 0 ; i-- ){
                cout << arr[i];
            }
        }
        if ( m == 5 ){
            int arr[p] ;
            for ( int i = 0 ; i <= 6 ; i++ ){
                    int c = n % 8 ;
                    arr[i] = c ;
                    n = n / 8 ;
            }
            for ( int i = 2 ; i >= 0 ; i-- ){
                cout << arr[i];
            }
        }
        if ( m == 6 ){
            int arr[p] ;
            for ( int i = 0 ; i <= 2 ; i++ ){
                    int c = n % 16 ;
                    arr[i] = c ;
                    n = n / 16 ;
            }
            for ( int i = 2 ; i >= 0 ; i-- ){
                cout << arr[i];
            }
        }
    }
    if ( m == 7 ){
        // 011010
        cout << " Enter number of digits : " ;
        int n ; 
        cin >> n ;
        int m = n/2 ;
        int arr[n] ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cin >> arr[i] ;
        }
        int sum1 = 0 ;
        int sum2 = 0 ;
        for ( int i = n-1 ; i >= 0 ; i-- ){
            if ( i > 2 && i <= 5 ){
                if ( i == n-1 ) arr[i] = arr[i] * 1 ;
                if ( i == n-2 ) arr[i] = arr[i] * 2 ;
                if ( i == n-3 ) arr[i] = arr[i] * 4 ;
                sum1 = sum1 + arr[i] ;
            }
            else if ( i <= 2 ){
                if ( i == n-4 ) arr[i] = arr[i] * 1 ;
                if ( i == n-5 ) arr[i] = arr[i] * 2 ;
                if ( i == n-6 ) arr[i] = arr[i] * 4 ;
                sum2 = sum2 + arr[i] ;
            }
           
    }
    cout << sum2 << sum2 ;
    }
    if ( m == 8 ){
        // 01101101
        cout << " Enter number of digits : " ;
        int n ; 
        cin >> n ;
        int arr2[n] ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cin >> arr2[i] ;
        }
        int sum3 = 0 ;
        int sum4 = 0 ;
        char ch ;
        for ( int i = n-1 ; i >= 0 ; i-- ){
            if ( i > 3 && i <= 7 ){
                if ( i == n-1 ) arr2[i] = arr2[i] * 1 ;
                if ( i == n-2 ) arr2[i] = arr2[i] * 2 ;
                if ( i == n-3 ) arr2[i] = arr2[i] * 4 ;
                if ( i == n-4 ) arr2[i] = arr2[i] * 8 ;
                sum3 = sum3 + arr2[i] ;
                if ( sum3 >= 10 ){
                    if ( sum3 == 10 ) sum3 = 65 ;
                    if ( sum3 == 11 ) sum3 = 66 ;
                    if ( sum3 == 12 ) sum3 = 67 ;
                    if ( sum3 == 13 ) sum3 = 68 ;
                    if ( sum3 == 14 ) sum3 = 69 ;
                }
            }
            else if ( i <= 3 ){
                if ( i == n-5 ) arr2[i] = arr2[i] * 1 ;
                if ( i == n-6 ) arr2[i] = arr2[i] * 2 ;
                if ( i == n-7 ) arr2[i] = arr2[i] * 4 ;
                if ( i == n-8 ) arr2[i] = arr2[i] * 8 ;
                sum4 = sum4 + arr2[i] ;

            }
    }
    cout << sum4 << (char)sum3 ;
    }
    if ( m == 9 ){
        // 56 = 01010110
        cout << " Enter number of digits : " ;
        int n ;
        cin >> n ;
        cout << " Enter the number : " ;
        int m ;
        cin >> m ;
        int arr[n] ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cin >> arr[i] ;
        }
    }
     
    if ( m == 10 ){
        cout << " Enter the size of array : " ;
        int n ;
        cin >> n ;
        int arr[n] ;
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cin >> arr[i] ;
        }
        for ( int i = 0 ; i <= n-1 ; i++ ){
            if ( arr[i] == 0 ) arr[i] = 1 ;
            else if ( arr[i] == 1 ) arr[i] = 0 ;
        }
        for ( int i = 0 ; i <= n-1 ; i++ ){
            cout << arr[i] << " ";
        }
    }
}