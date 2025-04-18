// Problem  :- Given an array of integer and a range , write  an algorith to partition the Array so that value is smaller 
// than the range come the left . than values under the range follow with value greater than the range 
#include<iostream>
#include<algorithm>
using namespace std;

void RangePartition(int* arr, int size, int smallerRange, int largerRange) {
    int start = 0, mid = 0, end = size - 1;

    while (mid <= end) {
        if (arr[mid] < smallerRange) {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] > largerRange) {
            swap(arr[mid], arr[end]);
            end--;
        }
        else {
            mid++;
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 19, 4, 18,9,  5, 17, 6, 16, 7, 14, 8, 14, 13, 10, 12, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    RangePartition(arr, size, 9, 12);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
