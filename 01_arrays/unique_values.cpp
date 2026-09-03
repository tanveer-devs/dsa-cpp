#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 4, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arr[i] << " ";
        }
    }
}