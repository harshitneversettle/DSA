#include<iostream>
#include<stack>
using namespace std ;
int main(){
    stack <int> st ;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;
    st.push(50) ;

    // for printign whole stack ;
    // for this phele original stak ko new stack me khali kro .... fir new wale ko dusre stack me khali kro 
    // then dusre wale stack ko firse original wale me khali krdo .... printing krwate jaao 

    stack <int> gt ;
    while ( st.size() > 0 ){    // jbtk st stack khali nhi ho jata tbtk loop chalega 
        cout << st.top() << " " ;
        gt.push(st.top()) ;
        st.pop() ;
        // is loop ka output reverse order me print hua hai.......or 1 loss or hai ....humne toh pop kr diye
        // iska mtlb original stack khatam ho gaya ......proof neeche hai 
    }
    cout << endl ; 
    cout << st.top() << endl << endl  ;    // Garbage value print hogi because original stack ko toh humne pop kr diya ....
    // usko conserve krne ke liye 1 stack or lagega 



    // ye printing ka method accha hai 


    while ( st.size() > 0 ){    // jbtk st stack khali nhi ho jata tbtk loop chalega 
        cout << st.top() << " " ;
        gt.push(st.top()) ;
        st.pop() ;
    }
    stack <int> ht ;
    while ( gt.size() > 0 ){
        ht.push(gt.top()) ;
        gt.pop() ;
        st.push(ht.top()) ;
    }
    cout << st.top() ;
}
