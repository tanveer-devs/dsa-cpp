#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 1, 2, 1, 4, 5, 7, 2};
    int size = sizeof(arr) / sizeof(int);
    int ptr_1, ptr_2; 
    int duplicate = 0;
    for (int i = 0; i < size; i++){       
            bool notFond = true;
            for(int k = 0; k < i; k++){
                if(arr[i] == arr[k]){
                    notFond = false;
                    break;
                }
            }
        ptr_1 = arr[i];
            for(int j = i + 1; j < size; j++){
            ptr_2 = arr[j];
            if(ptr_1 == ptr_2 && notFond){
                cout << arr[i] << " ";
                // duplicate = arr[i];
                notFond = false;
            }
    }
  }
}


// Approach three loops:

// 1st loop: start checking from ith index to 0th index and if val is fond then set notFond val to false.

//2nd and 3rd loop to check duplicates