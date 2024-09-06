#include <iostream>
using namespace std;

int findMaxSpecialSum(int arr[], int n) {
    int maxSpecialSum = -1000000000;

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        int k = 1;
        int j = i;

        while (j < n) {
            for (int l = 0; l < k && j + l < n; ++l) {
                currentSum += arr[j + l];
            }
            j += k;
            ++k;
        }

        if (currentSum > maxSpecialSum) {
            maxSpecialSum = currentSum;
        }
    }

    return maxSpecialSum;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << findMaxSpecialSum(arr, n) << endl;

    return 0;
}
