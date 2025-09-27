class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        map<int,int>m;
        int i,j;
        for(int i=0;i<b.size();i++){
            int ele=b[i];
            for(j=i+1;j<b.size();j++){
                if(b[j]>b[i]){
                    m[ele]=b[j];
                    break;
                }
            }
        }
        vector<int>ans;
        for(i=0;i<a.size();i++){
            if(m[a[i]]==0) ans.push_back(-1);
            else
            ans.push_back(m[a[i]]);
        }
        return ans;
    }
};