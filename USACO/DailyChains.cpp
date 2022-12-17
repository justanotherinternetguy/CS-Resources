#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;
	int petals[N];

	for (int i = 0; i < N; ++i) {
		cin >> petals[i];
	}

	int photos = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			int total_petals = 0;
			for (int k = i; k <= j; k++) {
				total_petals += petals[k];
			}
			bool present = false;

			for (int k = i; k <= j; k++) {
				if (petals[k] * (j-i+1) == total_petals) {
					present = true;
				}
			}
			if (present) {
				photos++;
			}
		}
	}

	cout << photos;
	return 0;
}
