class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        
        int temp=0;
    int i=0;
    while(i<s.size()){
        if(s[i]>='0'&&s[i]<='9'){
            while(i<s.size()&&s[i]!=' '){
               temp=temp*10+(s[i]-'0');
                i++;
            }
            ans.push_back(temp);
            temp=0;
        }
        i++;
    }
    for(auto& i:ans) cout<<i<<" ";
  
     for (int j = 1; j < ans.size(); ++j) {
            if (ans[j] <= ans[j - 1]) {
                return false;  
            }
        }

        return true; 
    }
};