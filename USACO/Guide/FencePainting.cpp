#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int dist = (b-a) + (d-c);
    int intersection = max(min(b, d) - max(a, c), 0);
    int res = dist - intersection;
    cout << res << "\n";
}
