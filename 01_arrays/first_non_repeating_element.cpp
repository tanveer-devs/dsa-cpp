#include <iostream>
using namespace std;

int main() {

    int arr[] = {7, 2, 7, 4, 5, 2, 4, 5, 9, 9, 6};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++) {

        bool duplicateFound = false;

        for(int j = 0; j < size; j++) {

            if(i != j && arr[i] == arr[j]) {
                duplicateFound = true;
                break;
            }
        }

        if(!duplicateFound) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}