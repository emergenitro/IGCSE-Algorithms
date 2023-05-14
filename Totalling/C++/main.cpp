#include <iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int total = 0, len=sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<len; i++){
        total += arr[i];
    }

    cout << total;

    return 0;
}