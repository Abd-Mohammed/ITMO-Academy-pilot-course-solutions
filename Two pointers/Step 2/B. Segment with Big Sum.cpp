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

    const int inf = 1e9 + 7;

    ll sum = 0;
    int ans = inf , j = 0;

    for(int i = 0 ; i < n ; i += 1){
        sum += a[i];
        while(sum - a[j] >= s){
            sum -= a[j];
            j += 1;
        }
        if(sum >= s)
            ans = min(ans ,  i - j + 1) ;
    }
    if(ans == inf) ans = -1;
    
    cout << ans << "\n";

    return (0 - 0);
}
// ~Abd