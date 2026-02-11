
class Solution {
public:

    int maxIndex(vector<int>& a, int n){
        int idx = 0;
        for(int i=1;i<n;i++){
            if(a[i] > a[idx])
                idx = i;
        }
        return idx;
    }

    vector<int> pancakeSort(vector<int>& a) {
        vector<int> ans;
        int n = a.size();

        for(int curr = n; curr > 1; curr--){
            
            int idx = maxIndex(a, curr);

           
            if(idx == curr-1)
                continue;
            if(idx != 0){
                reverse(a.begin(), a.begin()+idx+1);
                ans.push_back(idx+1);
            }

          
            reverse(a.begin(), a.begin()+curr);
            ans.push_back(curr);
        }
        return ans;
    }
};
