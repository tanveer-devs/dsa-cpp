#include <iostream>
using namespace std;
int main(){
        int arr[] = {1, 1, 2, 2, 3};
        int size = sizeof(arr)/sizeof(int);
        for (int i = 0; i < size; i++){
            int unique = arr[i];
            for(int j = i + 1; j < size; j++){
                if(arr[j] != unique){
                    cout << arr[j] << endl;
                }
            }
        }
        
}