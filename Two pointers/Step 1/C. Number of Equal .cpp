#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n , m ;  cin >> n >> m;
    vector<int>a(n), b(m);

    for(int &i : a)cin >> i;
    for(int &i : b)cin >> i;

    ll ans = 0;

    for(int i = 0, j = 0 ; i < n ; i += 1){
        int ptr1 = 0 , ptr2 = 0;

        while(i + 1 < n && a[i] == a[i + 1]){
            i += 1;
            ptr1 += 1;
        }

        while(j < m && b[j] <= a[i]){
            if(a[i] == b[j]){
                ptr2 += 1;
            }
            j += 1;
        }

        ans += 1ll * (1 + ptr1) * ptr2;
    }

    cout << ans << "\n";

    return (0 - 0);
}
// ~Abd