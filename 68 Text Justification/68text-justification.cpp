class Solution {
public:
    vector<string> fullJustify(vector<string>& a, int k) {
        vector<int>temp;
        for(int i=0;i<a.size();i++){
            temp.push_back((int)a[i].size());
        }
        int sum=0,cnt=0;
        vector<pair<int,int>>idxs;
        int i;
        for( i=0;i<temp.size();i++){
            if(sum+temp[i]+cnt>k){
                idxs.push_back({sum,cnt});
                sum=0;
                cnt=0;
            }
            sum+=temp[i];
            cnt++;
        }
        idxs.push_back({sum,cnt});
        vector<string>ans;
        int start=0;
        for(int i=0;i<idxs.size();i++){
            int n=idxs[i].first;
            int c = idxs[i].second;
            int sp = k-n;
             string st;
             if(i==idxs.size()-1||c==1){
                for(int j=0;j<c;j++){
                    st+=a[start];
                    start++;
                    if(j!=c-1) st+=" ";
                }
                while(st.size()<k) st+=" ";
             }
             else{
            int div = sp/(c-1);
           int rem= sp%(c-1);
            while(c--){
                st+=a[start];
                start++;
                if(c>0){
                     for(int j=0;j<div;j++)
                st+=" ";
                if(rem>0){
                    st+=" ";
                    rem--;
                }
                
                }
               
            }
            // while(st.size()<k) st+=" ";
             }
            
            ans.push_back(st);
           
        }
        
        return ans;
    }
};