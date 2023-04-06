#include <bits/stdc++.h>

using namespace std;


int group(int O, int E) {

	int diff = O - E;

	if (diff == 0) {

		return O + E;

	}

	else if (diff ==1) {

		return O + E - 2;

	}

	else if (diff ==2) {

		return E + O - 1;

	}

	else {

		O -= 2;

		E += 1;

	}


	return group(O, E);

}


int main() {

	int N;

	cin >> N;


	int oddC = 0, evenC = 0;

	for (int i = 0; i < N; i++) {

		int cow;

		cin >> cow;

		if (cow % 2 == 0){

			evenC += 1;

		}

		else {

			oddC += 1;

		}

	}


	if (evenC > oddC) {

		cout << 2 * oddC + 1;

	}

	else {

		cout << group(oddC, evenC);

	}

	return 0;

}
