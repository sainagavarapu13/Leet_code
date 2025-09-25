class Solution {
public:
    int calPoints(vector<string>& a) {
        int i;
        vector<string>ans;
        for(i=0;i<a.size();i++){
            if(a[i]=="C"){
                ans.pop_back();
            }
            else if(a[i]=="D"){
                int k=stoi(ans.back());
                ans.push_back(to_string(2*k));
            }
            else if(a[i]=="+"){
                int num1=stoi(ans.back());
                int num2=stoi(ans[ans.size()-2]);
                ans.push_back(to_string(num1+num2));
            }
            else ans.push_back(a[i]);
        }
       int cnt=0;
       for(i=0;i<ans.size();i++){
        cnt+=stoi(ans[i]);
       }
       return cnt;
    }
};