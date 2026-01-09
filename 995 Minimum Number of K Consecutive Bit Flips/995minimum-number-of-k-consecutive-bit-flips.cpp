class Solution {
public:
    int minKBitFlips(vector<int>& n, int k) {
        queue<int>q;
        int ans=0;
        for(int i=0;i<n.size();i++){
            while( !q.empty() && q.front()+k <=i){
                q.pop();
            }
            int ele = n[i];
           if(q.size()%2!=0) ele ^=1;
            if(ele==0){if( i+k>n.size()){
                    return -1;
            }
            q.push(i);
            ans++;
            }
        }
        return ans;
    }
};