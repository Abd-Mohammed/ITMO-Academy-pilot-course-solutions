#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    ll s;
    cin >> n >> s;
    vector<int>a(n);

    for(int &i : a) cin >> i;

    int  j = 0 , ans = 0;
    ll sum = 0;

    for(int i = 0 ; i < n ; i += 1){
        sum += a[i];
        while(j < n && sum > s){
            sum -= a[j];
            j += 1;
        }
        ans = max(ans, i - j + 1);
    }

    cout << ans << '\n';

    return (0 - 0);
}
// ~Abd