#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

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

#define INT (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

/*******************************************************************************/

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Assume full = 100 mL

  int n;
  int temp;
  cin >> n;
  double res;

  vector<int> drinks;
  // intake
  for (int i = 0; i < n; i++) {
    cin >> temp;
    drinks.PB(temp);
  }

  int overall = (drinks.size()) * 100;
  int juiceP = 0;

  for (int b = 0; b < drinks.size(); b++) {
    juiceP += drinks[b];
  }

  res = ((double)juiceP / (double)overall) * 100;
  cout << res << "\n";

  return 0;
}