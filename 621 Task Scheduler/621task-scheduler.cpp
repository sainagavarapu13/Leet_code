class Solution {
public:
    int leastInterval(vector<char>& a, int n) {
        int ans = 0;
        priority_queue<int> pq;
        vector<int> v(26, 0); 

        for(char i : a){
            v[i - 'A']++;
        }
        for(int i = 0; i < 26; i++){
            if(v[i] > 0) pq.push(v[i]);
        }

        while(!pq.empty()){
            int t = 0;
            vector<int> s;
            int c = n + 1;

            while(c-- && !pq.empty()){
                if(pq.top() > 1){
                    s.push_back(pq.top() - 1);
                }
                pq.pop();
                t++;
            }

            for(int i : s){
                pq.push(i);
            }

            ans += (pq.empty() ? t : n + 1);
        }

        return ans;
    }
};