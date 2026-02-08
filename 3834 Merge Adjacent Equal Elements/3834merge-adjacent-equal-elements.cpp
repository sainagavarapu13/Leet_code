class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& a) {
        vector<long long> st;

    for (long long x : a) {
      
        while (!st.empty() && st.back() == x) {
            x *= 2;
            st.pop_back();
        }
        st.push_back((long long)x);
    }

    return st;
        
    }
};