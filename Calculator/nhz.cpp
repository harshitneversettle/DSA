#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int x = 0; x < n; ++x) {
        int length = 1;

        for(int y = x + 1; y < n; ++y) {
            if((arr[y - 1] % 2 == 0 && arr[y] % 2 != 0) || (arr[y - 1] % 2 != 0 && arr[y] % 2 == 0)) {
                length++;
            } else {
                break;
            }
        }
        cout << length << " ";
    }
    return 0;
}