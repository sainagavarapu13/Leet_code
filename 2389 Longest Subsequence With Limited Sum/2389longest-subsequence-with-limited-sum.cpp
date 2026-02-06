class Solution {
public:
    int find(vector<int>&a , int b){
        int start = 0 , end = a.size()-1,i;
        for( i=0;i<a.size();i++){
            if(a[i]>b) return i;
        }
        return i;
    }
    vector<int> answerQueries(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        sort(a.begin(),a.end());
        int sum =0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            a[i] = sum;
        }
        for(int i=0;i<b.size();i++){
            ans.push_back(find(a,b[i]));
        }
        return ans;
    }
};