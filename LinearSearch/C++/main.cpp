#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[] = {"hello", "zebra", "cat", "cow", "donkey"};
    int len = sizeof(arr) / sizeof(arr[0]);

    string searchFor = "cat";

    for (int i = 0; i < len; ++i){
        if (arr[i] == searchFor){
            cout << "Found at index " << i << endl;
            break;
        }
    }

    return 0;
}