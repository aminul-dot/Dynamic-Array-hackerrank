#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<int> > v(N);
    int lastAns = 0;

    while (Q--) {
        int x, y, t;
        cin >> t >> x >> y;
        
        if (t == 1) {
            v[(x ^ lastAns) % N].push_back(y);
        } else {
            lastAns = v[(x ^ lastAns) % N][y % v[(x ^ lastAns) % N].size()];
            cout << lastAns << endl;

        }
    }

    return 0;
}
