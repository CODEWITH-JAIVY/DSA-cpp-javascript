#include<iostream>
using namespace std  ;
long long int binarySearch(int n) {
    long long int start = 0, end = n;
    long long int mid;
    long long int ans = -1; // To store the floor square root

    while (start <= end) {
        mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if (square == n) {
            return mid; // Perfect square
        }

        if (square < n) {
            ans = mid; // Store the last valid floor value
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans; // Floor square root
}

int floorSqrt(int n) {
    return binarySearch(n);
}

int main () {
    int num  ;
    cout<<"Ener number " ;
    cin>> num   ;
    int squr = floorSqrt(num) ;
    cout<< squr  ;
    return  0  ; 
}