
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> A(N);
    cout << "Enter the elements of the array (non-zero integers): ";
    for(int i = 0; i < N; ++i){
        cin >> A[i] ;
    }
    int maxLength = 1;
    for(int x = 0; x < N; ++x){
        int oddCount = 0;
        int evenCount = 0;

        for (int y = x; y < N; ++y) {
            if (A[y] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }

            if (evenCount > 0 && oddCount > 0 && evenCount == oddCount) {
                
                maxLength = max(maxLength, y - x + 1);
            }
        }
    }

    cout << "Length of the longest alternating subarray: " << maxLength << endl;

    return 0;
}
