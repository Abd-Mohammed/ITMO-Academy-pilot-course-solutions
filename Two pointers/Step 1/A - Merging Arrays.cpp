#include "bits/stdc++.h"

using namespace std;
using ll [[maybe_unused]] = long long;

template<typename T>
inline void print(vector<T>&v , int add_one = false , int start = -1 , int end = -1){
    if(end<0)end = int(v.size());
    if(start < 0) start = 0;
    for(int i = start ; i < end ; i++){
        cout << v[i] + (add_one ? 1 : 0) << " \n"[i == end -1];
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n , m ; cin >> n >> m;
    vector<int>a(n) , b(m) , ans;

    for(int &i : a)cin >> i ;
    for(int &i : b)cin >> i ;

    int i(0) , j(0) ;

    while(i < n || j < m){
        if(j == m || (i < n && a[i] < b[j])){
            ans.push_back(a[i++]);
        }else{
            ans.push_back(b[j++]);
        }
    }

    print(ans);

    return (0 - 0);
}
// ~Abd