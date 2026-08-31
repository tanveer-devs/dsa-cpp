// Perform linear search on an array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int target;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the element you want to search in array: ";
    cin >> target;
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout << arr[i] << " is at index of " << i;
        }
    }
}