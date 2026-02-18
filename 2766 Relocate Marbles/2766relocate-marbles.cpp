class Solution {
public:
    vector<int> relocateMarbles(vector<int>& a, vector<int>& f, vector<int>& t) {
        set<int>st;
   for (int i : a) {
            st.insert(i);
        }

        for (int i = 0; i < f.size(); i++) {
            if (st.count(f[i])) {
                st.erase(f[i]);
                st.insert(t[i]);
            }
        }
        vector<int> s;
        for (auto x : st) {
            s.push_back(x);
        }

        return s;
    }
};