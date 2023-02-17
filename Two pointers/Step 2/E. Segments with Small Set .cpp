#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n , k ; cin >> n >> k;

    vector<int>a(n);

    for(int &i : a)cin >>i;

    map<int , int> cnt;

    int uq = 0;
    auto add = [&](int ele) -> void{
        cnt[ele] += 1;
        if(cnt[ele] == 1){
            uq += 1;
        }
    };

    auto remove = [&](int ele) -> void{
        cnt[ele] -= 1;
        if(!cnt[ele]){
            uq-=1;
        }
    };


    auto good = [&]() -> bool {
        return uq <= k;
    };

    int l = 0;
    ll tot = 0;
    for(int r = 0 ; r < n ; r += 1){
        add(a[r]);
        while(!good()){
            remove(a[l]);
            l += 1;
        }
        tot += r - l + 1;
    }

    cout << tot << '\n'; 
    return (0 - 0);
}
// ~Abd