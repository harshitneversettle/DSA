#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0; 
    int j = 0;
    int k = 0;
    while(i< a.size() && j< b.size()) {
        if(a[i] < b[j]) {
            res[k++] = a[i++];
        }
        else res[k++] =  b[j++];
    }
    if(i==a.size()) {
        while(j<b.size()) res[k++] = b[j++];
    }
    if(j==b.size()) {
        while(i<a.size()) res[k++] = a[i++];
    }
}
void merge(vector<int>& v) {
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int>a(n1);
    for(int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    vector<int>b(n2);
    for(int i = 0; i < n2; i++) {
        b[i] = v[i+n1];
    }
    merge(a);
    merge(b);
    mergesort(a,b,v);
}
int main()
{
    int arr[] = { 7,4,2,9,6,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr, arr+n);
     for(int i = 0; i< n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    merge(v);
    for(int i = 0; i< n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}