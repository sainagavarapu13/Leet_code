class Solution {
public:
    int calPoints(vector<string>& a) {
        stack<int> s;
        
        for (auto i : a) {
            if (i == "D") {
                int t = s.top();
                s.push(2 * t);
            } 
            else if (i == "C") {
                s.pop();
            } 
            else if (i == "+") {
                int k = s.top(); s.pop();
                int b = s.top(); s.pop();
                
                int sum = k + b;
                
                s.push(b);
                s.push(k);
                s.push(sum);
            } 
            else {
                s.push(stoi(i));
            }
        }

        int ans = 0;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};
