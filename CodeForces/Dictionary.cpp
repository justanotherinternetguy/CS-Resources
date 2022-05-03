// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK
// THIS CODE DOES NOT WORK

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<char> ch = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    
    int rounds;
    scanf("%d", &rounds);
    
    for (int i = 0; i < rounds; i++) {
        string s;
        cin>>s;
        int index = 0;

        for (int i = 0; i < 26; i++) {
            if (s[0] == ch[i]) {
                index = i * 25;
            }
        }


        for (int j = 0; j < 25; j++) {
            if (s[1] == ch[j]) {
                index += j+1;
            }
        }
        cout << index << "\n";
    }
}
