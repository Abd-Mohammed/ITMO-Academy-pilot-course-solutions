#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n , m ; cin >> n >> m;
    vector<int>a(n) , b(m);
    for(int &i : a)cin >> i;
    for(int &i : b)cin >> i;

    int j = 0;
    for(int i = 0 ; i < m ; i += 1){
        while(j < n && a[j] < b[i]){
            j += 1;
        }
        cout << j << ' ';
    }


    return (0 - 0);
}
// ~Abd