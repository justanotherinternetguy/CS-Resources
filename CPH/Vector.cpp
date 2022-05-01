#include <bits/stdc++.h>


using namespace std;


#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795l
#define MP make_pair
#define PB push_back
#define pb pop_back
#define INF (int)1e9
#define EPS 1e-9

#define FLP(i, a, n) for(i=a;i<n;i++)

typedef vector<int> VI;

int main() {
	VI vec;
	vec = {3, 2, 5, 8};
	vec.PB(1);

	cout << vec.back() << "\n";

	vec.pb();
	cout << vec.back() << "\n";

	return 0;
}

