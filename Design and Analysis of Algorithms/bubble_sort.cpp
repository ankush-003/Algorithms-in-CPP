#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(vector<int> &arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr;
    int i, n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    sort(arr.begin(), arr.end());
    for(int i: arr) {
        cout << i << " ";
    }
}