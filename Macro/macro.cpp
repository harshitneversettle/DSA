// #include<iostream>
// #include<ctime>
// using namespace std ;
// int main(){
//     bool flag = false ;
//     cout << endl ;
//     cout << "           WELCOME TO STONE PAPER SISSOR GAME          " ;
//     cout << endl << endl ;
//     cout << " Enter 1 for stone " << endl ;
//     cout << " Enter 2 for paper " << endl ;
//     cout << " Enter 3 for sissor " << endl ;
//     cout << endl ;
//     cout << " Enetr your choice : " ;
//     int guess ;
//     cin >> guess ;

//     srand(time(0)) ;
//     int ans ;
//     for ( int i = 0 ; i <= 2 ; i++ ){
//         ans = rand() % (3-1+1)+1 ;
//         break;
//     }
//     if ( ans ==  guess ) cout << " Tie " ;
//     if ( ans == 1 && guess == 2 ) flag = true ;
//     if ( ans == 1 && guess == 3 ) flag = false ;
//     if ( ans == 2 && guess == 1 ) flag = false ;
//     if ( ans == 2 && guess == 3 ) flag = true ;
//     if ( ans == 3 && guess == 2 ) flag = false ;
//     if ( ans == 3 && guess == 1 ) flag = true ;
//     if (flag == true) cout << " You win " ;
//     else cout << " You lost " << endl 
//     cout << " Your choice : " << guess << endl ;
//     cout << " Computer choice : " << ans << endl ;
// }
#include<iostream>
#include<math.h>
#include<string>

using namespace std;


int main() {
    string a,b,c,d,e,f;
    cout<<"enter the given number system :";
    cin >>a;
    cout <<"enter number system required :";
    cin>>b;
    c="binary";
    d="decimal";
    e="Hexadecimal";
    f="octal";
    
    if(a==d & b==c){
    int n;
    cout<<"enter decimal number:";
    cin >> n;
    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" binary equivalent : " << ans << endl;
    }
   if(a==d & b==e)
{
int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    char hexadecimalNumber[100];
    int index = 0;

    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        char hexDigit;

        if (remainder < 10)
            hexDigit = remainder + '0';
        else
            hexDigit = remainder - 10 + 'A';

        hexadecimalNumber[index++] = hexDigit;
        decimalNumber = decimalNumber/16;
    }

    cout << "Hexadecimal Equivalent: ";

   
        cout << hexadecimalNumber;}
 if(a==d & b==f)
{
   
int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber = octalNumber+ (decimalNumber % 8) * i;
        decimalNumber =decimalNumber/ 8;
        i =i* 10;
    }

    cout << "Octal Equivalent: " << octalNumber << endl;}}