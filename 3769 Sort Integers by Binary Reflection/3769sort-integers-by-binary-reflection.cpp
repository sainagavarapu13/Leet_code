class Solution {
public:
    int bi(int n){
        string s="";
        long long a = 1,b = 0;
        while(n){
            int e = n%2;
            s = s + to_string(e);
            n /=2;
        }
        for(int i = s.length()-1;i>=0;i--){
            //cout<<"--"<<b<<"--"<<s[i]<<"--"<<a<<endl;
            if(s[i]=='0'){
                a*=2;
                continue;
            }
            b = b + (s[i]-'0')*a;
            a *=2;
        }
        return b;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[i] = bi(nums[i]);
        }
        // for(auto x : m){
        //    // cout<<"-"<<x.first<<" "<<x.second<<endl;
        // }
        vector<pair<int,int>> vec(m.begin(),m.end());
        sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
            if(a.second == b.second){
                return nums[a.first] < nums[b.first];
            }
            return a.second < b.second;
        });
        vector<int>n;
        for(auto x : vec){
            n.push_back(nums[x.first]);
        }
        return n;
    }
};