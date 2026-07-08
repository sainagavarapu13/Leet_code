class Solution {
public:
    int minOperations(vector<int>& a) {
        int ans=0,add=0;
        int n=a.size(),z=0;
        while(n!=z){
            z=0;
            int odd=0;
            for(int i=0;i<a.size();i++){
                
                if(a[i]==0) z++;

           else if(a[i]%2){
                odd=1;
                a[i]--;
                ans++;
            }
        }
         if (z == n) break;
        if(odd==0){
            for (int i = 0; i < n; i++)
                    a[i] /= 2;
                ans++;
        }
        }
        cout<<n;
        return ans;

    }
};