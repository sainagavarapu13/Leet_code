class Solution {
public:
int cnt=0;
vector<int>ans;
    void check(int n,int low,int high,int last){
        if(last==9) {
           if(n>=low&&n<=high){
            ans.push_back(n);
        }
            return;}
        if(n>high){
            return;
        }
        if(n>=low&&n<=high){
            ans.push_back(n);
        }
        check((n*10)+last+1,low,high,last+1);
       
    }
    vector<int> sequentialDigits(int low, int high) {
      ans.clear();
      for(int i=1;i<=9;i++)
      check(i,low,high,i);
      sort(ans.begin(),ans.end());
      return ans;
    }
};