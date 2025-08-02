class Solution {
public:
    int heightChecker(vector<int>& a) {
        int cnt=0;
      
         
        vector<int> b(a.begin(),a.end());
          sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            cout<<a[i];
            if(a[i]!=b[i]){
                cnt++;
            }
        }
        return cnt;
    }
};