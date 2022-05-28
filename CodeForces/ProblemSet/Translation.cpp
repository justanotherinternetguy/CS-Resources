/*******************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;


typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define all(x) x.begin(), x.end()

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef map<string, int> msp;
typedef map<int, int> mii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;


#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define FLP(i,a,b) for (int i = a; i < b; i++)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}





int main(void) {


    string s, t;
    cin >> s >> t;


    // reverse
    reverse(s.begin(), s.end());
    if (s == t) { cout << "YES" << "\n"; }
    else { cout << "NO" << "\n"; }
    
	ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
	return 0;
}
