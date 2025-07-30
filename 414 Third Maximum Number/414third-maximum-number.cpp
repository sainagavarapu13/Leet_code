class Solution {
public:
    int thirdMax(vector<int>& a) {
        sort(a.begin(),a.end());
        set<int>s;
        vector<int>arr;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i:s){
            arr.push_back(i);
        }
        int len=arr.size();
          if(len>=3) return arr[len-3];
          else{
            return arr[len-1];
          }
          return 0;
    }
};