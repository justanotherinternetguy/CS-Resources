#include <bits/stdc++.h>
using namespace std;


void checkIfExist(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] == arr[i]*2 || arr[i] == arr[j]*2) {
                cout << "true" << '\n';
                cout << arr[i] << arr[j] << '\n';
            }
        }
    }
    cout << "false" << '\n';
}


int main() {
    vector<int> arr {-2, 0, 10, -19, 4, 6, -8};
    checkIfExist(arr);
}
