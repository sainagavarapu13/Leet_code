class Solution {
public:
    vector<string> largestString(vector<int>& a) {
        vector<string>ans;
        for(int i=0;i<a.size();i++){
            int k = a[i];
            string temp;
            int ch=0;
            while(k){
                if((k&1)==1){
                    if(ch==26){
                        temp.push_back('z');
                        temp.push_back('z');
                    }
                else temp.push_back(ch+'a');
                }
                k>>=1;
                ch++;
            }
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};