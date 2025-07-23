// Question ye hai ki agar me koi integer input me du toh output uaka half aaye   shart ye hai ki user ko integer hi input lena hai

/*#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number : " ;
    int x;
    cin >> x;
    float y = (float)x ;        //yahan typecasting hu hai  


    cout << y/2 <<endl;
    

}
*/

    // Question : Take a float input and print the fractional part of the real number......

    #include<iostream>
    using namespace std;
    int main(){
        cout << "Enter a number (in float form) : ";
        float x;
        cin >> x ;
        cout << "The fractional part of the entered number is : ";
        cout << x - (int)x <<endl;       // yahan typecasting ka use hua hai 
    }