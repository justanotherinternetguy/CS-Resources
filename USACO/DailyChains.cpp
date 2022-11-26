#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	// N flowers
	// i flower --> p_i petals
	int N;
	cin >> N;
	vector<int> petals;
	petals.resize(N);
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		petals[i] = temp;
	}

	sort(petals.begin(), petals.end());

	int res = 0;
	res += petals.size();

	for (int i = 0; i < petals.size(); i++) {
		for (int j = i+1; j < petals.size(); j++) {
			int sum = accumulate(petals.begin()+i, petals.begin()+j+1, 0);
			double avg = (double) sum / (double) (j-i+1);

			if (count(petals.begin()+i, petals.begin()+j+i, avg)) {
				res++;
				cout << '(' << *petals.begin()+i << ',' << *petals.begin()+j+i << ')';
			}

		}
	}
	cout << res << '\n';


	return 0;
}
