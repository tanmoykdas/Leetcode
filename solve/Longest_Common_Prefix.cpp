#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    string s; cin >> s;
    set<char> st;
    int l = 0, r = 0;
    int ans = 0;
    for (r  = 0; r < s.size(); r++) {
        while (st.count(s[r])) {
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
    return 0;
}