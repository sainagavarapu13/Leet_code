class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& b) {
        int i,sum=0;
        for(auto& i : a){
            sum+=i;
        }
        int cnt=0;
        sort(b.begin(),b.end(),greater<>());
        for(int i=0;i<b.size();i++){
            sum-=b[i];
            cnt++;
            if(sum<=0){
                break;
            }
        }
        return cnt;
    }
};