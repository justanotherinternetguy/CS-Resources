#include <bits/stdc++.h>
using namespace std;

/*
- two large compartments
- supposed to sort by type, elf that followed this rule forgot to sort by type

- INPUT: list of all item currently in backpack (line by line)
- types determined by letter case
- first half of string = first compartment, etc

- (a-z) = 1-26  (-96)
- (A-Z) = 27-52 (-38)
- SUM
*/

int N = 300;

// static std::vector<char> sortPriority(std::vector<char> vc) {

// }

static int solve(string first_half, string second_half) {
    // screw it lmao c++ should be fast enough
    int res = 0;
    char res_char;
    for (int i = 0; i < first_half.size(); ++i) {
        for (int j = 0; j < second_half.size(); ++j) {
            if (first_half[i] == second_half[j]) {
                res_char = first_half[i];
            }
        }
    }

    res = (int) res_char;

    if (res >= (int) 'a' && res <= (int) 'z') {
        return (int) res -96;
    } else {
        return (int) res -38;
    }
    return -1;
}

int main() {
    freopen("main.txt", "r", stdin);
    string lines[N];
    char res[N];
    
    for (int i = 0; i < N; ++i) {
        cin >> lines[i];
    }

    int result = 0;

    // int half_len = lines[0].size() / 2;

    // string first_half = lines[0].substr(0, half_len);
    // string second_half = lines[0].substr(half_len, lines[0].size());

    // result += solve(first_half, second_half);

    // cout << result << '\n';

    for (int i = 0; i < N; i++) {
        int half_len = lines[i].size() / 2;

        string first_half = lines[i].substr(0, half_len);
        string second_half = lines[i].substr(half_len, lines[i].size());

        result += solve(first_half, second_half);
    }

    cout << result << '\n';

    return 0;
}


// TEST.TXT = 157
// MAIN.TXT = 8053