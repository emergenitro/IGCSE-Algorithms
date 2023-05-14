#include <iostream>

using namespace std;

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Method 1
    for (int i = 0; i < len - 1; ++i){
        for (int j = 0; j < len - i - 1; ++j){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Method 2
    bool swapBool = true;
    int i = 0;
    while (swapBool){
        swapBool = false;
        for (int j = 0; j < len - i - 1; ++j){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapBool = true;
            }
        }
        ++i;
    }

    // Outputting the array (not required to know this)
    for (int i = 0; i < len; ++i){
        cout << arr[i] << " ";
    }
}