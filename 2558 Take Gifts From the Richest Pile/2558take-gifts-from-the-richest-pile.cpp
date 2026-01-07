class Solution {
public:
    long long pickGifts(vector<int>& a, int k) {
        priority_queue<int>q;
        for( int i:a){
            q.push(i);
        }
        for( int i=0;i<k;i++){
            int val = q.top();
            int root = floor(sqrt(val));
            q.pop();
            q.push(root);
        }
        long long sum=0;
        while( !q.empty()){
                sum+=q.top();
                q.pop();
        }
        return sum;
    }
};