#include <bits/stdc++.h>
using namespace std;

string toCamelCase(string text) {
    int len = text.size();
    int res_index = 0;

    for (int i = 0 ; i < len; i++) {
        if (text[i] == '-' || text[i] == '_') {
            text[i+1] = toupper(text[i+1]);
        } 
        else {
            text[res_index++] = text[i];
        }
    }
    return text.substr(0, res_index);
}


int main() {
    string text;
    cout << "input: " << "\n";
    cin >> text;
    cout << toCamelCase(text) << "\n";
    return 0;
}