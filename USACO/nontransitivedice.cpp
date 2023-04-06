#include <bits/stdc++.h>
using namespace std;
using Die = array<int, 4>;

bool beats(const Die& a, const Die& b) {
    int wins = 0;
    int losses = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i] > b[j]) wins++;
            if (a[i] < b[j]) losses++;
        }
    }
    return wins > losses;
}

bool nonTransitive(const Die& A, const Die& B) {
	for(int a = 1; a <= 10; a++) {
        for(int b = 1; b <= 10; b++) {
            for(int c = 1; c <= 10; c++) {
                for(int d = 1; d <= 10; d++) {
                    Die C{a,b,c,d};
                    if (beats(A,B) && beats(B,C) && beats(C,A)) return 1;
                    if (beats(B,A) && beats(C,B) && beats(A,C)) return 1;
                }
            }
        }
	}
	return 0;
}

int main() {
    int T;
    cin >> T;
    // b/c 4 sides, there are 10^4 = 10000 possible dice to test for non-transitivity
    // small enough to brute force

    for (int i = 0; i < T; i++) {
        Die A, B;
        for (int i = 0; i < 4; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < 4; i++) {
            cin >> B[i];
        }

        if (nonTransitive(A, B)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }

    }
    return 0;
}
