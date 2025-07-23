#include<iostream>
using namespace std ;
int main(){
    struct student {
        int roll_no ;
        string name[20] ;
        int marks;
    } ;
    struct student s1 ;
    s1.roll_no = 1 ;
    s1.name[0] = "Abhishek" ;
    s1.marks = 40 ;

    struct student s2 ;
    s2.roll_no = 2 ;
    s2.name[0] = " animesh " ;
    s2.marks = 35 ;

    cout << s2.roll_no << s2.name[0] << s2.marks ;
}
