#include <bits/stdc++.h>
using namespace std;

// im losing sanity

int isSorted(int *arr, int n) {
    while (--n >= 1) {
        if (arr[n] < arr[n-1]) {
            return 0;
        }
    }
    return 1;
}

void shuffle(int *arr, int n) {
    int temp, r;
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        r = rand() % n;
        arr[i] = arr[r];
        arr[r] = temp;
    }
}

void bogoSort(int *arr, int n) {
    while(!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

int main() {
    int[] arr[] = {3, 2, 1};
    int n = 3;


    for (int i = 0; i < 3; i++) {
        cout << arr[i] << '\t'
    }

    BogoSort(v);
    return 0;
}
