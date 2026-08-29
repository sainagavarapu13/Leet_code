class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        int i = 0;

        while (i < a.size()) {
            int num = a[i];

            while (!st.empty() && st.top() > 0 && num < 0) {
                if (abs(st.top()) == abs(num)) {
                    st.pop();
                    num = 0;
                }
                else if (abs(st.top()) < abs(num)) {
                    st.pop();
                }
                else {
                    num = 0;
                }
            }

            if (num != 0) {
                st.push(num);
            }

            i++;
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
