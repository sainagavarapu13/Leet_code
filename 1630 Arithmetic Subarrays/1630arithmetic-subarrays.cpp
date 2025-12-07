class Solution {
public:
    int is_arthmetic(vector<int>a,int start,int end){
        sort(a.begin()+start,a.begin()+end+1);
        int m=abs(a[start]-a[start+1]);
        for(int i=start;i<end;i++){
            if(m!=abs(a[i]-a[i+1])){
                return 0;
            }
        }
        return 1;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& a, vector<int>& l,             vector<int>& r) {
        int i;
         vector<bool>ans;
        for(i=0;i<l.size();i++){
            
           if(is_arthmetic(a,l[i],r[i])){
            ans.push_back(true);
           }
           else ans.push_back(false);
        }
        return ans;
    }
};