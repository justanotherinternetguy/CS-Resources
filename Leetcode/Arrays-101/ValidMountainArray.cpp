#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int> arr) {
    // special case
    if (arr.size() < 3) { return false; }

    int temp = 0;
    // up
    while (temp+1 < arr.size() && arr[temp] < arr[temp+1]) {temp++;}

    // peak
    if (temp == 0 || temp == arr.size() - 1) {return false;}

    // down
    while (temp+1 < arr.size() && arr[temp] > arr[temp+1]) {temp++;}

    return (temp == arr.size()-1);

}

int main() {
    vector<int> arr {0, 3, 2, 1};
    cout << validMountainArray(arr) << '\n';
}
