#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    ll s;
    cin >> n >> s;

    vector<int>a(n);

    for(int &i : a)cin >> i;

    ll sum = 0 , cnt = 0;
    int l = 0;

    for(int r = 0 ; r < n ; r += 1){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l += 1;
        }

        cnt += r - l + 1;
    }

    cout << cnt << '\n';

    return (0 - 0);
}
// ~Abd