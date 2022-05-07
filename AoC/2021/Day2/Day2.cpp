/*******************************************************************************/
#include <bits/stdc++.h>
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
typedef unsigned long long int  uint64;

#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007



#define WI(x); printf("%d\n", x)
#define WS(x); cout << x << "\n"
#define WL(x); printf("%ld\n", x)
#define WF(x); printf("%f\n", x)
#define WC(x); printf("%c\n", x)
#define BR(); cout << "\n"

#define SCI(t) scanf("%d", &t)
#define SCF(t) scanf("%f", &t)
#define SCS(t) getline(cin, t)
#define SCC(t) scanf("%c", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld",&t)


#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define FLP(i,a,b) for (int i = a; i < b; i++)


mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

/*******************************************************************************/

void partOne(vs v) {
    int h = 0; // horizontal
    int d = 0; // depth

    FLP (i, 0, v.size()-1) {
        if (v[i][0] == 'f') {
            h += (int) v[i].back() - 48;
        }

        if (v[i][0] == 'd') {
            d += (int) v[i].back() - 48;
        }

        if (v[i][0] == 'u') {
            d -= (int) v[i].back() - 48;
        }
    }

    WI(h*d);
}

void partTwo(vs v) {
    int aim = 0;
    int d = 0;
    int h = 0;

    FLP (i, 0, v.size()-1) {
        if (v[i][0] == 'f') {
            h += (int) v[i].back() - 48;
            d += ((int) v[i].back() - 48) * aim;
        }

        if (v[i][0] == 'd') {
            aim += (int) v[i].back() - 48;
        }

        if (v[i][0] == 'u') {
            aim -= (int) v[i].back() - 48;
    }
    }
    WI(h*d);
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    vs v; string temp;

    ifstream f;
    f.open("in.txt");
    
    // read from file
    while (f) {
        getline(f, temp);
        v.PB(temp);
    }
    partOne(v);
    partTwo(v);


    f.close();
	return 0;
}
