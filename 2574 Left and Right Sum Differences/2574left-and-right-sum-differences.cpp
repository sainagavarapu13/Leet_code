class Solution {
public:
    vector<int> leftRightDifference(vector<int>& a) {
        vector<int>left,right,ans;
        int sum=0,s=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        for(int i=0;i<a.size();i++){
            sum-=a[i];
            left.push_back(s);
            right.push_back(sum);
            s+=a[i];
        }
        for(int i=0;i<a.size();i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};