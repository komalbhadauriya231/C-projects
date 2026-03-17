#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 3, 4, 2, 5, 3};
    int n = 6;

    sort(arr, arr + n);

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            cout << "Duplicate number is: " << arr[i];
            return 0;
        }
    }

    cout << "No duplicate";
}
