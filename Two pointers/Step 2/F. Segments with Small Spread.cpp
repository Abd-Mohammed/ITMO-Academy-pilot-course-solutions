#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;
#define len(a) (int)a.size()


signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; ll k;
    cin >> n >> k;


    vector<ll>a(n);

    for(ll &i : a)cin >> i;

    deque<ll> minQueue , maxQueue;


    auto add = [&](const ll ele) -> void{
        while(len(minQueue) && ele < minQueue.back()){
            minQueue.pop_back();
        }
        minQueue.push_back(ele);

        while(len(maxQueue) && ele > maxQueue.back()){
            maxQueue.pop_back();
        }
        maxQueue.push_back(ele);
    };

    auto remove = [&](const ll ele) -> void{
        if(len(minQueue) && minQueue.front() == ele ){
            minQueue.pop_front();
        }
        if(len(maxQueue) && maxQueue.front() == ele ){
            maxQueue.pop_front();
        }
    };


    auto good = [&]() -> bool{ 
        if(!len(minQueue) && !len(maxQueue))return true;

        return maxQueue.front() - minQueue.front() <= k;
    };


    int l = 0 ;
    ll cnt = 0;

    for(int r = 0 ; r < n ; r += 1){
        add(a[r]);
        while(!good()){
            remove(a[l]);
            l += 1;
        }

        cnt += r - l + 1;
    }

    cout << cnt << '\n';




    return (0 - 0);
}
// ~Abd