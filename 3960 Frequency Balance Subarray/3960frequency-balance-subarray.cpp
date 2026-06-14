class Solution {
public:
    int getLength(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            unordered_map<int,int>m;
            unordered_map<int,int>f;

            int maxi=0;
            int dis =0;
            for(int j=i;j<n;j++){
               int x = nums[j];
                int old  = m[x];
                if(old>0){
                    if(--f[old]==0){
                        f.erase(old);
                    }
                }
                    else{
                        dis++;
                    }
                    m[x]++;
                    int newf = m[x];
                    f[newf]++;
                    maxi=max(maxi,newf);
                    int len=j-i+1;
                    if(dis==1){
                        ans=max(ans,len);
                        continue;
                    }
                    if(maxi%2) continue;
                    int half = maxi/2;
                    bool ok=true;
                    for(auto& [n,c]:f){
                        if(n!=maxi && n!=half){
                            ok=false;
                            break;
                        }
                    }
                    if(!ok) continue;
                    if(f.count(maxi)&&f.count(half)){
                        ans=max(ans,len);
                    }
                
                
            }
        }
        return ans;
    }
};